#!/bin/sh
#####################################################################################################################################################################
#																Installation Script Telnet + Ftp + ssh																#
#																	cusco, Sanek2033, A-TEAM																		#
#####################################################################################################################################################################

POPUP=/tmp/popup.txt
echo "" > $POPUP
 
function displayMessage {
    echo "${1}" >> $POPUP
    /fs/rwdata/dev/utserviceutility popup $POPUP
}

function displayImage {
	slay APP_SUM
	slay -s 9 NAV_Manager
	slay -s 9 fordhmi
	slay HMI_AL
	display_image -file=/fs/usb0/SyncMyMod/installation_${1}.png -display=2 &

	while [ -e /fs/usb0 ]; do
		sleep 1
	done

	shutdown

	exit 0
}

#########################################################################################################################################################
#																Check if Mods Tools are installed														#
#########################################################################################################################################################
grep -q "MODS_TOOLS" /fs/rwdata/dev/mods_tools.txt
if [ $? -ne 0 ]; then
	displayImage "aborted"
fi

chmod a+x /fs/rwdata/dev/*

#########################################################################################################################################################
#															Check if mod is already installed															#
#########################################################################################################################################################
grep -q "DC_shadow" /fs/mp/etc/installed_mods.txt
grep -q "DC_ethernet" /fs/mp/etc/installed_mods.txt
if [ $? -eq 0 ]; then
   displayMessage "Telnet + ftp + ssh is already installed on your Sync 3!"

   exit 0
fi

#########################################################################################################################################################
#																Remount FS as RW																		#
#########################################################################################################################################################
. /fs/rwdata/dev/remount_rw.sh
sleep 1

	#########################################################################################################################################################
	#																Copying new files																		#
	#########################################################################################################################################################
	# Creating new folders
	mkdir /fs/mp/etc/ssh
	#Core Files
	cp /fs/usb0/SyncMyMod/ethernet_starts.sh /fs/mp/scripts
	cp /fs/usb0/SyncMyMod/shadow_mount.sh /fs/mp/scripts
	cp /fs/usb0/SyncMyMod/shadow.img /fs/rwdata/dev
	cp /fs/usb0/SyncMyMod/wifi_config.conf /fs/mp/etc
	cp /fs/usb0/SyncMyMod/ftpusers /fs/mp/etc
	cp /fs/usb0/SyncMyMod/inetd.conf /fs/mp/etc
	cp /fs/usb0/SyncMyMod/pf-tiw_p2pdev0.conf /fs/mp/etc
	cp /fs/usb0/SyncMyMod/pf-tiw_p2pgrp0.conf /fs/mp/etc
	cp /fs/usb0/SyncMyMod/pf-tiw_sta0.conf /fs/mp/etc
	cp /fs/usb0/SyncMyMod/sbin/ftpd /fs/mp/usr/sbin
	cp /fs/usb0/SyncMyMod/sbin/inetd /fs/mp/usr/sbin
	cp /fs/usb0/SyncMyMod/sbin/qconn /fs/mp/usr/sbin
	cp /fs/usb0/SyncMyMod/sbin/sshd /fs/mp/usr/sbin
	cp /fs/usb0/SyncMyMod/sbin/telnetd /fs/mp/usr/sbin
	cp /fs/usb0/SyncMyMod/dll/devn-asix.so /fs/mp/lib/dll
	cp /fs/usb0/SyncMyMod/dll/devnp-asix.so /fs/mp/lib/dll
	cp /fs/usb0/SyncMyMod/ssh/ssh_config /fs/mp/etc/ssh
	cp /fs/usb0/SyncMyMod/ssh/ssh_host_rsa_key /fs/mp/etc/ssh
	cp /fs/usb0/SyncMyMod/ssh/sshd_config /fs/mp/etc/ssh
	
	# Applying execute permissions to new files
	chmod a+x /fs/mp/scripts/shadow_mount.sh
	chmod a+x /fs/mp/scripts/ethernet_starts.sh
	chmod a+x /fs/mp/usr/sbin/ftpd
	chmod a+x /fs/mp/usr/sbin/inetd
	chmod a+x /fs/mp/usr/sbin/qconn
	chmod a+x /fs/mp/usr/sbin/sshd
	chmod a+x /fs/mp/usr/sbin/telnetd
	chmod a+x /fs/mp/lib/dll/devn-asix.so
	chmod a+x /fs/mp/lib/dll/devnp-asix.so
	chmod a+x /fs/mp/etc/ssh/ssh_config
	chmod 600 /fs/mp/etc/ssh/ssh_host_rsa_key
	chmod a+x /fs/mp/etc/ssh/sshd_config

	# Editing startup script
	echo "DC_shadow">> /fs/mp/etc/installed_mods.txt
	echo "/fs/mp/scripts/shadow_mount.sh &">> /fs/mp/scripts/startup_gf.sh
	echo "DC_ethernet">> /fs/mp/etc/installed_mods.txt
	echo "/fs/mp/scripts/ethernet_starts.sh &">> /fs/mp/scripts/startup_script_functions.sh

	#########################################################################################################################################################
	#																Remount FS as RO																		#
	#########################################################################################################################################################
sleep 1
. /fs/rwdata/dev/remount_ro.sh
sync
sync
sync

#########################################################################################################################################################
#																Display success image and reboot														#
#########################################################################################################################################################
displayImage "completed"
