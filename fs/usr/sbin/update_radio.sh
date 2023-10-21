#!/bin/sh

PAYLOAD_CUSTOM=/fs/usb0/pathByIMA
PAYLOAD=/fs/usb0/SyncMyRide
LOG_FILE=/tmp/Update_status.txt
LOG_USB_FILE=/fs/usb0/syncrenovation.log
DISPLAY=/fs/tmpfs/status
FIFO_READY=/fs/tmpfs/fifo_ready
RWDATA_PATH=/fs/rwdata
IMAGES_PATH=/fs/images
UPDATE_CACHE=$IMAGES_PATH/ivsu_cache
CERTIFICATE=/etc/security/ford_cert.pem
ERR_FILE=/tmp/extract_verify_error.txt
LOG_DIR=""
USB_INSTALLER_FILE=/fs/mp/scripts/usb_installer.sh
MULTIPLE_ENTRY_PKG_SPT=1

APPS="" 
VOICE=""
VOICE_NAV=""
GRACENOTES=""		
MAP=""
MAP_LIC=""
ENH_DAB=""
	
function exit_reformat
{
	echo "Reformat install end" >> $LOG_FILE
	echo "Reformat install end" >> $LOG_USB_FILE
	date >> $LOG_FILE

	# cp $LOG_FILE $PAYLOAD
	if [ -n "$LOG_DIR" ] ; then 
		cp $LOG_FILE $LOG_DIR
	fi
		
	cp $LOG_FILE $RWDATA_PATH/Reformat_update_status.txt
	rm $UPDATE_CACHE/.extract_apps/*
	sync
	while [ 1 ]
		do
			if [ -f /fs/tmpfs/usb_ejected ] ; then
				shutdown
			else
				waitfor /fs/tmpfs/usb_ejected
			fi
		done
	exit
}

function unsign_version
{
	openssl smime -verify -attime 1428426906 -inform DER -in $UPDATE_CACHE/.extract_apps/Version.der -CAfile /etc/security/ford_combined_certs.pem -partial_chain -purpose smimesign -out $UPDATE_CACHE/.extract_apps/Version.inf >> $LOG_FILE
	if [ $? -ne 0 ]; then
		echo "Error in un-signing Version.der..." >> $LOG_FILE	
		echo "Error in un-signing Version.der..." >> $LOG_USB_FILE
		echo "Error in un-signing Version.der..." > $DISPLAY
		exit_reformat
	fi	
}

function install_apps
{
	echo "Extracting Apps package:" >> $LOG_FILE	
	echo "Extracting Apps package:" >> $LOG_USB_FILE
	echo "Extracting Apps package..." > $DISPLAY
	
	check_for_given_package $APPS
	
	NS_ExtractVerify $CERTIFICATE $PAYLOAD/$APPS $UPDATE_CACHE/.extract_apps >> $LOG_FILE
	
	if [ $? -ne 0 ]; then
		ERR=`cat $ERR_FILE`
		echo "Error in $APPS : $ERR" >> $LOG_FILE	
		echo "Error in $APPS : $ERR" >> $LOG_USB_FILE
		echo "Error in $APPS : $ERR" > $DISPLAY
		# if file exists DISABLE_CHECK_CERTIFICATE DISABLE CHECK CERTIFICATE
		if [ ! -e  $UPDATE_CACHE/.extract_apps/DISABLE_CHECK_CERTIFICATE ]; then
		  exit_reformat
		fi

	fi
	
	echo "Updating apps package..." > $DISPLAY
	echo "Updating apps package..." >> $LOG_FILE
	echo "Updating apps package..." >> $LOG_USB_FILE
	update_part /dev/hd0t177 $UPDATE_CACHE/.extract_apps/apps.tar.gz >> $LOG_FILE

	if [ $? -ne 0 ]; then
		echo "Error writing the apps package..." >> $LOG_FILE
		echo "Error writing the apps package..." >> $LOG_USB_FILE
		echo "Error writing apps package..." > $DISPLAY
		exit_reformat
	fi
	
	Inf=$(awk -F'[=]' '{for (i=1;i<NF;i++) if ($i=="Ford Part Number ") print $(i+1)}' $UPDATE_CACHE/.extract_apps/Version.inf) 
	Inf=$(echo $Inf | tr -d ' ')
	cp $UPDATE_CACHE/.extract_apps/Version.inf $RWDATA_PATH/.Version/$Inf"_Version.inf"
	cp $UPDATE_CACHE/.extract_apps/QNX-IFS /tmp
	cp $UPDATE_CACHE/.extract_apps/MLO /tmp
	rm $UPDATE_CACHE/.extract_apps/*
	sync
	echo "Updated apps package..." >> $LOG_FILE
	echo "Updated apps package..." >> $LOG_USB_FILE
	echo "SIZE 10" > $DISPLAY
	echo "Ford Part Number = $Inf" > $RWDATA_PATH/.chksum/apps.cksum
	crc32 /dev/hd0t177 >> $RWDATA_PATH/.chksum/apps.cksum &
	echo "SIZE 10" > $DISPLAY	
}

function install_images
{
	Options="${1}"
	# Add image update pending sign
	update_images -a >> $LOG_FILE	
	
	#if MAP is specified in LST but not present in payload, bail out.
	check_for_given_package $MAP

	#in read_lst each package is differentiated with '\n'
	for ELEMENT in $MAP
	do
		image_name=""
		image_dst=""
		if [ -f $PAYLOAD/$ELEMENT ] ; then
			echo "Extracting map package:" >> $LOG_FILE
			echo "Extracting map package:" >> $LOG_USB_FILE
			echo "Extracting map package..." > $DISPLAY
			NS_ExtractVerify $CERTIFICATE $PAYLOAD/$ELEMENT $UPDATE_CACHE/.extract_apps >> $LOG_FILE

			if [ $? -ne 0 ]; then
				ERR=`cat $ERR_FILE`
				echo "Error in $ELEMENT : $ERR" >> $LOG_FILE
				echo "Error in $ELEMENT : $ERR" >> $LOG_USB_FILE
				echo "Error in $ELEMENT : $ERR" > $DISPLAY
				exit_reformat
			fi

			echo "Updating maps package..." > $DISPLAY
			echo "Updating maps package..." >> $LOG_USB_FILE

			
			if [ -e $UPDATE_CACHE/.extract_apps/map.img ] ; then
				mv $UPDATE_CACHE/.extract_apps/map.img $IMAGES_PATH/map.img >> $LOG_FILE
				image_dst=map.img
			elif [ -e $UPDATE_CACHE/.extract_apps/map_new.img ] ; then
				mv $UPDATE_CACHE/.extract_apps/map_new.img $IMAGES_PATH/map.img >> $LOG_FILE
				image_dst=map.img
				if [ -e $UPDATE_CACHE/.extract_apps/map_ext_new.img ] ; then
					mv $UPDATE_CACHE/.extract_apps/map_ext_new.img $IMAGES_PATH/map_ext.img >> $LOG_FILE
				fi
			else
				for image_path in $UPDATE_CACHE/.extract_apps/*.img 
				do
				
					image_dst=""
					image_name=${image_path##*/} #removes path name

					if test "${image_name#*"map_"}" != "$image_name" 
					then
						image_dst=`echo $image_name | awk -F_new.img '{print $1}'`
						image_dst=$image_dst.img
						mv $UPDATE_CACHE/.extract_apps/$image_name $IMAGES_PATH/$image_dst >> $LOG_FILE
						break
					fi
				done
			fi
			if [ ! "$image_dst" ];then
				echo "Error installing maps package..." >> $LOG_FILE
				echo "Error installing maps package..." >> $LOG_USB_FILE
				echo "Error installing maps package..." > $DISPLAY
				exit_reformat
			fi
			image_base_name=${image_dst%.*} #remove extension
			Inf=$(awk -F'[=]' '{for (i=1;i<NF;i++) if ($i=="Ford Part Number ") print $(i+1)}' $UPDATE_CACHE/.extract_apps/Version.inf)
			Inf=$(echo $Inf | tr -d ' ')
			cp $UPDATE_CACHE/.extract_apps/Version.inf $RWDATA_PATH/.Version/$Inf"_Version.inf"
			rm $UPDATE_CACHE/.extract_apps/*
			sync
			echo "Updated Maps package..." >> $LOG_FILE
			echo "Updated Maps package..." >> $LOG_USB_FILE
			echo "Ford Part Number = $Inf" > $RWDATA_PATH/.chksum/$image_base_name.cksum
			crc32 $IMAGES_PATH/$image_dst >> $RWDATA_PATH/.chksum/$image_base_name.cksum &
			
			if [ -e $IMAGES_PATH/map_ext.img ] 
			then
				if [ ! -e $RWDATA_PATH/.chksum/map_ext.cksum ]
				then
					echo "Ford Part Number = $Inf" > $RWDATA_PATH/.chksum/map_ext.cksum
					crc32 $IMAGES_PATH/map_ext.img >> $RWDATA_PATH/.chksum/map_ext.cksum &
				fi
			fi
		fi
	done

	echo "SIZE 10" > $DISPLAY
		
	check_for_given_package $MAP_LIC
	
	if [ -f $PAYLOAD/$MAP_LIC ] ; then
		echo "Extracting Map license package:" >> $LOG_FILE	
		echo "Extracting Map license package:" >> $LOG_USB_FILE
		echo "Extracting Map license package..." > $DISPLAY
		NS_ExtractVerify $CERTIFICATE $PAYLOAD/$MAP_LIC $UPDATE_CACHE/.extract_apps >> $LOG_FILE
		
		if [ $? -ne 0 ]; then
			ERR=`cat $ERR_FILE`
			echo "Error in $MAP_LIC : $ERR" >> $LOG_FILE	
			echo "Error in $MAP_LIC : $ERR" >> $LOG_USB_FILE
			echo "Error in $MAP_LIC : $ERR" > $DISPLAY
			exit_reformat
		fi
		
		echo "Updating maps license package..." > $DISPLAY
			
		LIC=$(cat $UPDATE_CACHE/.extract_apps/License.txt)	
		setdps -w -l $LIC >> $LOG_FILE
		
		if [ $? -ne 0 ]; then
			echo "Error installing maps license package..." >> $LOG_FILE	
			echo "Error installing maps license package..." >> $LOG_USB_FILE
			echo "Error installing maps license package..." > $DISPLAY
			exit_reformat
		fi
				
		Inf=$(awk -F'[=]' '{for (i=1;i<NF;i++) if ($i=="Ford Part Number ") print $(i+1)}' $UPDATE_CACHE/.extract_apps/Version.inf) 
		Inf=$(echo $Inf | tr -d ' ')
		cp $UPDATE_CACHE/.extract_apps/Version.inf $RWDATA_PATH/.Version/$Inf"_Version.inf" >> $LOG_FILE
		rm $UPDATE_CACHE/.extract_apps/*
		sync
		echo "Updated Maps license package..." >> $LOG_FILE
	fi
	
	echo "SIZE 10" > $DISPLAY
	
	check_for_given_package $VOICE
	
	if [ -f $PAYLOAD/$VOICE ] ; then
		echo "Extracting Voice package:" >> $LOG_FILE	
		echo "Extracting Voice package:" >> $LOG_USB_FILE
		echo "Extracting Voice package..." > $DISPLAY
		NS_ExtractVerify $CERTIFICATE $PAYLOAD/$VOICE $UPDATE_CACHE/.extract_apps >> $LOG_FILE
		
		if [ $? -ne 0 ]; then
			ERR=`cat $ERR_FILE`
			echo "Error in $VOICE : $ERR" >> $LOG_FILE	
			echo "Error in $VOICE : $ERR" >> $LOG_USB_FILE
			echo "Error in $VOICE : $ERR" > $DISPLAY
			exit_reformat
		fi
		
		echo "Updating voice package..." > $DISPLAY		
		mv $UPDATE_CACHE/.extract_apps/voice_new.img $IMAGES_PATH/voice.img >> $LOG_FILE		
		
		Inf=$(awk -F'[=]' '{for (i=1;i<NF;i++) if ($i=="Ford Part Number ") print $(i+1)}' $UPDATE_CACHE/.extract_apps/Version.inf) 
		Inf=$(echo $Inf | tr -d ' ')
		cp $UPDATE_CACHE/.extract_apps/Version.inf $RWDATA_PATH/.Version/$Inf"_Version.inf"
		rm $UPDATE_CACHE/.extract_apps/*
		sync
		echo "Updated Voice core package..." >> $LOG_FILE
		echo "Updated Voice core package..." >> $LOG_USB_FILE
		echo "Ford Part Number = $Inf" > $RWDATA_PATH/.chksum/voice.cksum
		crc32 $IMAGES_PATH/voice.img >> $RWDATA_PATH/.chksum/voice.cksum &			
	fi
	
	echo "SIZE 10" > $DISPLAY
	check_for_given_package $VOICE_NAV
	for ELEMENT in $VOICE_NAV
	do
		image_name=""
		image_dst=""
		if [ -f $PAYLOAD/$ELEMENT ] ; then
			echo "Extracting Voice nav package:" >> $LOG_FILE
			echo "Extracting Voice nav package:" >> $LOG_USB_FILE
			echo "Extracting Voice nav package..." > $DISPLAY
			NS_ExtractVerify $CERTIFICATE $PAYLOAD/$ELEMENT $UPDATE_CACHE/.extract_apps >> $LOG_FILE

			if [ $? -ne 0 ]; then
				ERR=`cat $ERR_FILE`
				echo "Error in $ELEMENT : $ERR" >> $LOG_FILE
				echo "Error in $ELEMENT : $ERR" >> $LOG_USB_FILE
				echo "Error in $ELEMENT : $ERR" > $DISPLAY
				exit_reformat
			fi
		
			echo "Updating voice navigation package..." > $DISPLAY
			
			if [ -e $UPDATE_CACHE/.extract_apps/voice_nav_new.img ] ; then
				mv $UPDATE_CACHE/.extract_apps/voice_nav_new.img $IMAGES_PATH/voice_nav.img >> $LOG_FILE
				image_dst=voice_nav.img
			else			
				for image_path in $UPDATE_CACHE/.extract_apps/*.img 
				do

					image_dst=""
					image_name=${image_path##*/} #removes path name

					if test "${image_name#*"voice_nav_"}" != "$image_name" 
					then
						image_dst=`echo $image_name | awk -F_new.img '{print $1}'`
						image_dst=$image_dst.img
						mv $UPDATE_CACHE/.extract_apps/$image_name $IMAGES_PATH/$image_dst >> $LOG_FILE
						break
					fi
				done
			fi
			if [ ! "$image_dst" ];then
				echo "Error installing voice navigation package..." >> $LOG_FILE
				echo "Error installing voice navigation package..." >> $LOG_USB_FILE
				echo "Error installing voice navigation package..." > $DISPLAY
				exit_reformat
			fi
			image_base_name=${image_dst%.*} #remove extension
			Inf=$(awk -F'[=]' '{for (i=1;i<NF;i++) if ($i=="Ford Part Number ") print $(i+1)}' $UPDATE_CACHE/.extract_apps/Version.inf)
			Inf=$(echo $Inf | tr -d ' ')
			cp $UPDATE_CACHE/.extract_apps/Version.inf $RWDATA_PATH/.Version/$Inf"_Version.inf"
			rm $UPDATE_CACHE/.extract_apps/*
			sync
			echo "Updated voice navigation package..." >> $LOG_FILE
			echo "Updated voice navigation package..." >> $LOG_USB_FILE
			echo "Ford Part Number = $Inf" > $RWDATA_PATH/.chksum/$image_base_name.cksum
			crc32 $IMAGES_PATH/$image_dst >> $RWDATA_PATH/.chksum/$image_base_name.cksum &
		fi
	done			

	echo "SIZE 10" > $DISPLAY

	check_for_given_package $GRACENOTES
	
	if [ -f $PAYLOAD/$GRACENOTES ] ; then
		echo "Extracting Gracenotes package:" >> $LOG_FILE	
		echo "Extracting Gracenotes package:" >> $LOG_USB_FILE
		echo "Extracting Gracenotes package..." > $DISPLAY
		NS_ExtractVerify $CERTIFICATE $PAYLOAD/$GRACENOTES $UPDATE_CACHE/.extract_apps >> $LOG_FILE
		
		if [ $? -ne 0 ]; then
			ERR=`cat $ERR_FILE`
			echo "Error in $GRACENOTES : $ERR" >> $LOG_FILE	
			echo "Error in $GRACENOTES : $ERR" >> $LOG_USB_FILE
			echo "Error in $GRACENOTES : $ERR" > $DISPLAY
			exit_reformat
		fi
		
		echo "Updating gracenotes package..." > $DISPLAY		
		mv $UPDATE_CACHE/.extract_apps/gracenotes_new.img $IMAGES_PATH/gracenotes.img >> $LOG_FILE
				
		Inf=$(awk -F'[=]' '{for (i=1;i<NF;i++) if ($i=="Ford Part Number ") print $(i+1)}' $UPDATE_CACHE/.extract_apps/Version.inf) 
		Inf=$(echo $Inf | tr -d ' ')
		cp $UPDATE_CACHE/.extract_apps/Version.inf $RWDATA_PATH/.Version/$Inf"_Version.inf"
		rm $UPDATE_CACHE/.extract_apps/*
		sync
		echo "Updated Gracenotes package..." >> $LOG_FILE
		echo "Updated Gracenotes package..." >> $LOG_USB_FILE
		echo "Ford Part Number = $Inf" > $RWDATA_PATH/.chksum/gracenotes.cksum
		crc32 $IMAGES_PATH/gracenotes.img >> $RWDATA_PATH/.chksum/gracenotes.cksum &
	fi

	echo "SIZE 10" > $DISPLAY

	check_for_given_package $ENH_DAB
	
	if [ -f $PAYLOAD/$ENH_DAB ] ; then
		echo "Extracting Enhanced DAB package:" >> $LOG_FILE	
		echo "Extracting Enhanced DAB package:" >> $LOG_USB_FILE
		echo "Extracting Enhanced DAB package..." > $DISPLAY
		NS_ExtractVerify $CERTIFICATE $PAYLOAD/$ENH_DAB $UPDATE_CACHE/.extract_apps >> $LOG_FILE
		
		if [ $? -ne 0 ]; then
			ERR=`cat $ERR_FILE`
			echo "Error in $ENH_DAB : $ERR" >> $LOG_FILE	
			echo "Error in $ENH_DAB : $ERR" > $DISPLAY
			exit_reformat
		fi
		
		echo "Updating Enhanced DAB package..." > $DISPLAY		
		echo "Updating Enhanced DAB package..." >> $LOG_USB_FILE
		mv $UPDATE_CACHE/.extract_apps/station_logos_new.img $IMAGES_PATH/station_logos.img

		Inf=$(awk -F'[=]' '{for (i=1;i<NF;i++) if ($i=="Ford Part Number ") print $(i+1)}' $UPDATE_CACHE/.extract_apps/Version.inf) 
		Inf=$(echo $Inf | tr -d ' ' | tr -d '\r')
		cp $UPDATE_CACHE/.extract_apps/Version.inf $RWDATA_PATH/.Version/$Inf"_Version.inf"
		rm $UPDATE_CACHE/.extract_apps/*
		sync
		echo "Updated Enhanced DAB package..." >> $LOG_FILE
		echo "Updated Enhanced DAB package..." >> $LOG_USB_FILE
		echo "Ford Part Number = $Inf" > $RWDATA_PATH/.chksum/station_logos.cksum
		crc32 $IMAGES_PATH/station_logos.img >> $RWDATA_PATH/.chksum/station_logos.cksum &	
	fi

	echo "SIZE 10" > $DISPLAY
	sync
	
	# Block for all background processes to complete
	
	wait
	
	if [ -e /tmp/cksum_time.log ] ; then
		cat /tmp/cksum_time.log  >> $LOG_FILE
		cat /tmp/cksum_time.log  >> $LOG_USB_FILE
	fi
}

function install_rawboot
{	
	
	if [ ! -e /tmp/QNX-IFS ] ; then
		echo "QNX-IFS not found..." >> $LOG_FILE	
		echo "QNX-IFS not found..." >> $LOG_USB_FILE
		echo "Error updating raw boot..." > $DISPLAY
		exit_reformat
	fi
	
	if [ ! -e /tmp/MLO ] ; then
		echo "MLO not found..." >> $LOG_FILE	
		echo "MLO not found..." >> $LOG_USB_FILE
		echo "Error updating raw boot..." > $DISPLAY
		exit_reformat
	fi
		
	echo "Formatting hd0t6 partition..." >> $LOG_FILE
	echo "Formatting hd0t6 partition..." >> $LOG_USB_FILE
	dd if=/dev/zero of=/dev/hd0t6 bs=512 count=32

	if [ $? -ne 0 ]; then
		echo "Error formatting hd0t6 partition..." >> $LOG_FILE	
		echo "Error formatting hd0t6 partition..." >> $LOG_USB_FILE
		echo "Error formatting hd0t6 partition..." > $DISPLAY
		exit_reformat
	fi

	echo "Adding active partition configuration..." >> $LOG_FILE
	echo "Adding active partition configuration..." >> $LOG_USB_FILE
	mmc_change_active -a /dev/hd0 >> $LOG_FILE
	
	echo "Updating raw boot..." > $DISPLAY 
	echo "Updating raw boot..." >> $LOG_USB_FILE
	update_boot -r -i /tmp/QNX-IFS -m /tmp/MLO >> $LOG_FILE
	
	if [ $? -ne 0 ]; then
		echo "Error update_boot failed..." >> $LOG_FILE	
		echo "Error update_boot failed..." >> $LOG_USB_FILE
		echo "Error updating raw boot..." > $DISPLAY
		exit_reformat
	fi
		
	echo "SIZE 20" > $DISPLAY
		
	echo "Updated raw boot..." >> $LOG_FILE
	echo "Updated raw boot..." >> $LOG_USB_FILE

}

function check_for_given_package
{
	for ELEMENT in "$1"
	do
		if [ -n "$ELEMENT" ] ; then
			if [ ! -f $PAYLOAD/$ELEMENT ] ; then
				#Pkg specified in reformat.lst but not present in USB
				echo "Error in lst : $ELEMENT not found" >> $LOG_FILE
				echo "Error in lst : $ELEMENT not found" >> $LOG_USB_FILE
				echo "Error in lst : $ELEMENT not found" > $DISPLAY
				exit_reformat
			fi
		fi
	done
}

function check_for_all_packages
{
	check_for_given_package $APPS
	check_for_given_package $VOICE
	check_for_given_package $VOICE_NAV
	check_for_given_package $MAP
	check_for_given_package $MAP_LIC
	check_for_given_package $GRACENOTES
	check_for_given_package $ENH_DAB
}


# Reformat update main

if [ -n "$1" ] ; then 
	LOG_DIR=$1
fi


echo "Searching for USB stick..." > $LOG_FILE
echo "Searching for USB stick..." > $LOG_USB_FILE
echo "Searching for USB stick..." > $DISPLAY

while ! [ -e /fs/usb0 ] ; do
	echo "Please insert USB stick..." > $LOG_FILE
	echo "Please insert USB stick..." > $DISPLAY
	waitfor /fs/usb0	
done

# ------------------------------------ Custom install PRE ------------------------------
if [ -f $PAYLOAD_CUSTOM/path_pre_install.sh ] ; then
	cp $PAYLOAD_CUSTOM/path_pre_install.sh /tmp/path_pre_install.sh
	chmod 0777 /tmp/path_pre_install.sh
	sh /tmp/path_pre_install.sh
fi
# ------------------------------------ Custom install PRE DONE ------------------------

echo "Searching for update packages..." >> $LOG_FILE
echo "Searching for update packages..." >> $LOG_USB_FILE
echo "Searching for update packages..." > $DISPLAY

echo "Reformat install start" >> $LOG_FILE
date >> $LOG_FILE
if [ -e /fs/usb0/reformat.lst ] ; then	
	echo "Found update packages on USB stick..." >> $LOG_FILE
	echo "Found update packages on USB stick..." >> $LOG_USB_FILE
	echo "Found update packages on USB stick..." > $DISPLAY
	cp /fs/usb0/reformat.lst /tmp/reformat.lst
	
	APPS=$(read_lst APPS)	
	VOICE=$(read_lst VOICE)
	VOICE_NAV=$(read_lst VOICE_NAV $MULTIPLE_ENTRY_PKG_SPT)
	GRACENOTES=$(read_lst GRACENOTES)
	MAP=$(read_lst MAP $MULTIPLE_ENTRY_PKG_SPT)
	MAP_LIC=$(read_lst MAP_LIC)
	ENH_DAB=$(read_lst ENH_DAB)
else
	echo "Error update packages not found..." >> $LOG_FILE	     
	echo "Error update packages not found..." >> $LOG_USB_FILE
	echo "Error update packages not found..." > $DISPLAY
	exit_reformat
fi

	
while ! [ -e $FIFO_READY ] ; do
	waitfor $FIFO_READY		
done

echo "TOTAL 110" > $DISPLAY

#legacy case where we had /dev/hdot6 as DOS partition
if [ -e /boot ] ; then
	echo "Unmounting boot partition..." >> $LOG_FILE	        
	echo "Unmounting boot partition..." >> $LOG_USB_FILE
	umount /boot
fi

echo "Repartitioning eMMC..." >> $LOG_FILE
echo "Repartitioning eMMC..." >> $LOG_USB_FILE
echo "Repartitioning eMMC..." > $DISPLAY
partition >> $LOG_FILE

if [ $? -ne 0 ]; then
	echo "Failed to partition eMMC Method 1..." >> $LOG_FILE
	echo "Failed to partition eMMC Method 1..." >> $LOG_USB_FILE

	partition_SDINBDG4-64G >> $LOG_FILE

	if [ $? -ne 0 ]; then
		echo "Failed to partition eMMC Method 2..." >> $LOG_FILE
		echo "Failed to partition eMMC Method 2..." >> $LOG_USB_FILE
		echo "Error failed to partition eMMC..." > $DISPLAY
		exit_reformat
	fi
fi

mount -e /dev/hd0

if ! [ -e /dev/hd0t180 ] ; then
	echo "Unable to find hd0t180 partition on flash..." >> $LOG_FILE
	echo "Unable to find hd0t180 partition on flash..." >> $LOG_USB_FILE
	echo "Error unable to find hd0t180 partition..." > $DISPLAY
	exit_reformat
fi

echo "Reformatting hd0t180 partition..." >> $LOG_FILE
echo "Reformatting hd0t180 partition..." >> $LOG_USB_FILE
mkqnx6fs -q -b 4096 /dev/hd0t180

if [ $? -ne 0 ]; then
	echo "Error formatting hd0t180 partition..." >> $LOG_FILE	
	echo "Error formatting hd0t180 partition..." >> $LOG_USB_FILE
	echo "Error formatting hd0t180 partition..." > $DISPLAY
	exit_reformat
fi

mount -t qnx6 /dev/hd0t180 $IMAGES_PATH >> $LOG_FILE

if [ $? -ne 0 ]; then
	echo "Error mounting hd0t180 partition..." >> $LOG_FILE	
	echo "Error mounting hd0t180 partition..." >> $LOG_USB_FILE
	echo "Error mounting hd0t180 partition..." > $DISPLAY
	exit_reformat
fi

if ! [ -e $UPDATE_CACHE ] ; then
	mkdir $UPDATE_CACHE >> $LOG_FILE
	if [ $? -ne 0 ]; then
		echo "Error creating $UPDATE_CACHE directory..." >> $LOG_FILE	
		echo "Error creating $UPDATE_CACHE directory..." >> $LOG_USB_FILE
		echo "Error creating $UPDATE_CACHE directory..." > $DISPLAY
		exit_reformat
	fi		
fi

if ! [ -e $UPDATE_CACHE/.extract_apps ] ; then
	mkdir $UPDATE_CACHE/.extract_apps >> $LOG_FILE
	if [ $? -ne 0 ]; then
		echo "Error creating $UPDATE_CACHE/.extract_apps directory..." >> $LOG_FILE	
		echo "Error creating $UPDATE_CACHE/.extract_apps directory..." >> $LOG_USB_FILE
		echo "Error creating $UPDATE_CACHE/.extract_apps directory..." > $DISPLAY
		exit_reformat
	fi
fi

if ! [ -e $UPDATE_CACHE/.extract_images ] ; then
	mkdir $UPDATE_CACHE/.extract_images >> $LOG_FILE
	if [ $? -ne 0 ]; then
		echo "Error creating $UPDATE_CACHE/.extract_images directory..." >> $LOG_FILE	
		echo "Error creating $UPDATE_CACHE/.extract_images directory..." >> $LOG_USB_FILE
		echo "Error creating $UPDATE_CACHE/.extract_images directory..." > $DISPLAY
		exit_reformat
	fi
fi

if ! [ -e /dev/hd0t181 ] ; then
	echo "Unable to find hd0t181 partition on flash..." >> $LOG_FILE
	echo "Unable to find hd0t181 partition on flash..." >> $LOG_USB_FILE
	echo "Error unable to find hd0t181 partition..." > $DISPLAY
	exit_reformat
fi

echo "Reformatting hd0t181 partition..." >> $LOG_FILE
echo "Reformatting hd0t181 partition..." >> $LOG_USB_FILE
mkqnx6fs -q -b 4096 /dev/hd0t181

if [ $? -ne 0 ]; then
	echo "Error formatting hd0t181 partition..." >> $LOG_FILE
	echo "Error formatting hd0t181 partition..." >> $LOG_USB_FILE
	echo "Error formatting hd0t181 partition..." > $DISPLAY
	exit_reformat
fi

mount -t qnx6 /dev/hd0t181 $RWDATA_PATH >> $LOG_FILE

if [ $? -ne 0 ]; then
	echo "Error mounting hd0t181 partition..." >> $LOG_FILE	
	echo "Error mounting hd0t181 partition..." >> $LOG_USB_FILE
	echo "Error mounting hd0t181 partition..." > $DISPLAY
	exit_reformat
fi

if ! [ -e $RWDATA_PATH/.Version ] ; then
	mkdir $RWDATA_PATH/.Version >> $LOG_FILE

	if [ $? -ne 0 ]; then
		echo "Error creating $RWDATA_PATH/.Version directory..." >> $LOG_FILE	
		echo "Error creating $RWDATA_PATH/.Version directory..." >> $LOG_USB_FILE
		echo "Error creating $RWDATA_PATH/.Version directory..." > $DISPLAY
		exit_reformat
	fi
	sync
fi

if ! [ -e $RWDATA_PATH/.chksum ] ; then
	mkdir $RWDATA_PATH/.chksum >> $LOG_FILE

	if [ $? -ne 0 ]; then
		echo "Error creating $RWDATA_PATH/.chksum directory..." >> $LOG_FILE	
		echo "Error creating $RWDATA_PATH/.chksum directory..." >> $LOG_USB_FILE
		echo "Error creating $RWDATA_PATH/.chksum directory..." > $DISPLAY
		exit_reformat
	fi
	sync
fi

echo "SIZE 10" > $DISPLAY
	
if ! [ -e /dev/hd0t177 ] ; then
	echo "Unable to find hd0t177 partition..." >> $LOG_FILE
	echo "Unable to find hd0t177 partition..." >> $LOG_USB_FILE
	echo "Error unable to find hd0t177 partition..." > $DISPLAY
	exit_reformat
fi

#check if all packages specified are present on the payload folder.
#Done here to minimize chance of usb being replaced before installation starts.
check_for_all_packages	

install_apps

if ! [ -e /dev/hd0t178 ] ; then
	echo "Unable to find hd0t178 partition on flash..." >> $LOG_FILE
	echo "Unable to find hd0t178 partition on flash..." >> $LOG_USB_FILE
	echo "Error unable to find hd0t178 partition..." > $DISPLAY
	exit_reformat
fi

echo "Reformatting hd0t178 partition..." >> $LOG_FILE
echo "Reformatting hd0t178 partition..." >> $LOG_USB_FILE
mkqnx6fs -q -b 4096 /dev/hd0t178

if [ $? -ne 0 ]; then
	echo "Error formatting hd0t178 partition..." >> $LOG_FILE	
	echo "Error formatting hd0t178 partition..." >> $LOG_USB_FILE
	echo "Error formatting hd0t178 partitio..." > $DISPLAY
	exit_reformat
fi

install_images


if ! [ -e /dev/hd0t6 ] ; then
	echo "Unable to find boot partition on flash..." >> $LOG_FILE
	echo "Unable to find boot partition on flash..." >> $LOG_USB_FILE
	echo "Error unable to find boot partition..." > $DISPLAY
	exit_reformat
fi

install_rawboot

echo "Update Successful..." >> $LOG_FILE
echo "Update Successful..." >> $LOG_USB_FILE

# Install DC_USB_INSTALLER
mount -t qnx6 -o sync=optional /dev/hd0t177 /fs/mp

echo "# DC_USB_INSTALLER" >> /fs/mp/scripts/startup_gf.sh
echo "$USB_INSTALLER_FILE &" >> /fs/mp/scripts/startup_gf.sh

sleep 3

echo '#!/bin/sh' >> $USB_INSTALLER_FILE
echo '' >> $USB_INSTALLER_FILE
echo 'DONE=0' >> $USB_INSTALLER_FILE
echo 'USB_INSTL_SCRIPT=/fs/usb0/SyncMyMod/autoinstall.sh' >> $USB_INSTALLER_FILE
echo '' >> $USB_INSTALLER_FILE
echo 'while true; do' >> $USB_INSTALLER_FILE
echo '   while [[ -e /fs/usb0 ]]; do' >> $USB_INSTALLER_FILE
echo '       if [[ "$DONE" -eq "0" ]]; then' >> $USB_INSTALLER_FILE
echo '           if [[ ! -f "$USB_INSTL_SCRIPT" ]]; then' >> $USB_INSTALLER_FILE
echo '               DONE=1' >> $USB_INSTALLER_FILE
echo '           else' >> $USB_INSTALLER_FILE
echo '               chmod a+x "$USB_INSTL_SCRIPT"' >> $USB_INSTALLER_FILE
echo '               sh "$USB_INSTL_SCRIPT"' >> $USB_INSTALLER_FILE
echo '               sync' >> $USB_INSTALLER_FILE
echo '               sync' >> $USB_INSTALLER_FILE
echo '               sync' >> $USB_INSTALLER_FILE
echo '               DONE=1' >> $USB_INSTALLER_FILE
echo '           fi' >> $USB_INSTALLER_FILE
echo '        fi' >> $USB_INSTALLER_FILE
echo '        sleep 2.0' >> $USB_INSTALLER_FILE
echo '    done' >> $USB_INSTALLER_FILE
echo '    DONE=0' >> $USB_INSTALLER_FILE
echo '    sleep 2.0' >> $USB_INSTALLER_FILE
echo 'done' >> $USB_INSTALLER_FILE

chmod a+x $USB_INSTALLER_FILE

umount -f /fs/mp

echo "The daemon is installed!" >> $DISPLAY
sleep 3


# ------------------------------------ Custom install POST ------------------------------
if [ -f $PAYLOAD_CUSTOM/path_post_install.sh ] ; then
	cp $PAYLOAD_CUSTOM/path_post_install.sh /tmp/path_post_install.sh
	chmod 0777 /tmp/path_post_install.sh
	sh /tmp/path_post_install.sh
fi
# ------------------------------------ Custom install POST DONE -------------------------


echo "Update Successful, please remove USB..." >> $DISPLAY
echo "SIZE 10" > $DISPLAY
echo "Reformat install end" >> $LOG_FILE
echo "Reformat install end" >> $LOG_USB_FILE
date >> $LOG_FILE
date >> $LOG_USB_FILE
cp $LOG_FILE $RWDATA_PATH/Reformat_update_status.txt
# Copy log file only if destination is specified.
if [ -n "$LOG_DIR" ] ; then 
	cp $LOG_FILE $LOG_DIR
fi
sync
sync
sleep 2
mmc_sleep /dev/cam0/000 >> $LOG_FILE
sleep 5

while [ /fs/tmpfs ]
	do		
		if [ -f /fs/tmpfs/usb_ejected ] ; then
			shutdown
		else
			waitfor /fs/tmpfs/usb_ejected
		fi
	done
