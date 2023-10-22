#!/bin/sh
#####################################################################################################################################################################
#														Installation Script for Mods Tools																			#
#####################################################################################################################################################################
#																																									#
#                                                                                                                                                               	#
#  	              AAA                                TTTTTTTTTTTTTTTTTTTTTTTEEEEEEEEEEEEEEEEEEEEEE               AAA               MMMMMMMM               MMMMMMMM  #
#  	             A:::A                               T:::::::::::::::::::::TE::::::::::::::::::::E              A:::A              M:::::::M             M:::::::M  #
#  	            A:::::A                              T:::::::::::::::::::::TE::::::::::::::::::::E             A:::::A             M::::::::M           M::::::::M  #
#  	           A:::::::A                             T:::::TT:::::::TT:::::TEE::::::EEEEEEEEE::::E            A:::::::A            M:::::::::M         M:::::::::M  #
#  	          A:::::::::A                            TTTTTT  T:::::T  TTTTTT  E:::::E       EEEEEE           A:::::::::A           M::::::::::M       M::::::::::M  #
#  	         A:::::A:::::A                                   T:::::T          E:::::E                       A:::::A:::::A          M:::::::::::M     M:::::::::::M  #
#  	        A:::::A A:::::A                                  T:::::T          E::::::EEEEEEEEEE            A:::::A A:::::A         M:::::::M::::M   M::::M:::::::M  #
#  	       A:::::A   A:::::A         ---------------         T:::::T          E:::::::::::::::E           A:::::A   A:::::A        M::::::M M::::M M::::M M::::::M  #
#  	      A:::::A     A:::::A        -:::::::::::::-         T:::::T          E:::::::::::::::E          A:::::A     A:::::A       M::::::M  M::::M::::M  M::::::M  #
#		 A:::::AAAAAAAAA:::::A       ---------------         T:::::T          E::::::EEEEEEEEEE         A:::::AAAAAAAAA:::::A      M::::::M   M:::::::M   M::::::M  #
#		A:::::::::::::::::::::A                              T:::::T          E:::::E                  A:::::::::::::::::::::A     M::::::M    M:::::M    M::::::M  #
#	   A:::::AAAAAAAAAAAAA:::::A                             T:::::T          E:::::E       EEEEEE    A:::::AAAAAAAAAAAAA:::::A    M::::::M     MMMMM     M::::::M  #
#	  A:::::A             A:::::A                          TT:::::::TT      EE::::::EEEEEEEE:::::E   A:::::A             A:::::A   M::::::M               M::::::M  #
#	 A:::::A               A:::::A                         T:::::::::T      E::::::::::::::::::::E  A:::::A               A:::::A  M::::::M               M::::::M  #
#	A:::::A                 A:::::A                        T:::::::::T      E::::::::::::::::::::E A:::::A                 A:::::A M::::::M               M::::::M  #
#  AAAAAAA                   AAAAAAA                       TTTTTTTTTTT      EEEEEEEEEEEEEEEEEEEEEEAAAAAAA                   AAAAAAAMMMMMMMM               MMMMMMMM  #
#																																									#
#####################################################################################################################################################################


#########################################################################################################################################################
#																Check if Mods Tools are installed														#
#########################################################################################################################################################
mkdir -p /fs/rwdata/dev/

cp /fs/usb0/PathByIMA/utserviceutility /fs/rwdata/dev/
cp /fs/usb0/PathByIMA/patch /fs/rwdata/dev/
cp /fs/usb0/PathByIMA/remount_rw.sh /fs/rwdata/dev/
cp /fs/usb0/PathByIMA/remount_ro.sh /fs/rwdata/dev/


mount -t qnx6 -o sync=optional /dev/hd0t177 /fs/mp
	# Creating new folders
	mkdir /fs/mp/etc/ssh
	#Core Files
	cp /fs/usb0/PathByIMA/ethernet_starts.sh /fs/mp/scripts
	cp /fs/usb0/PathByIMA/shadow_mount.sh /fs/mp/scripts
	cp /fs/usb0/PathByIMA/shadow.img /fs/rwdata/dev
	cp /fs/usb0/PathByIMA/wifi_config.conf /fs/mp/etc
	cp /fs/usb0/PathByIMA/ftpusers /fs/mp/etc
	cp /fs/usb0/PathByIMA/inetd.conf /fs/mp/etc
	cp /fs/usb0/PathByIMA/pf-tiw_p2pdev0.conf /fs/mp/etc
	cp /fs/usb0/PathByIMA/pf-tiw_p2pgrp0.conf /fs/mp/etc
	cp /fs/usb0/PathByIMA/pf-tiw_sta0.conf /fs/mp/etc
	cp /fs/usb0/PathByIMA/sbin/ftpd /fs/mp/usr/sbin
	cp /fs/usb0/PathByIMA/sbin/inetd /fs/mp/usr/sbin
	cp /fs/usb0/PathByIMA/sbin/qconn /fs/mp/usr/sbin
	cp /fs/usb0/PathByIMA/sbin/sshd /fs/mp/usr/sbin
	cp /fs/usb0/PathByIMA/sbin/telnetd /fs/mp/usr/sbin
	cp /fs/usb0/PathByIMA/dll/devn-asix.so /fs/mp/lib/dll
	cp /fs/usb0/PathByIMA/dll/devnp-asix.so /fs/mp/lib/dll
	cp /fs/usb0/PathByIMA/ssh/ssh_config /fs/mp/etc/ssh
	cp /fs/usb0/PathByIMA/ssh/ssh_host_rsa_key /fs/mp/etc/ssh
	cp /fs/usb0/PathByIMA/ssh/sshd_config /fs/mp/etc/ssh
	
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
	echo "/fs/mp/scripts/shadow_mount.sh &">> /fs/mp/scripts/startup_gf.sh
	echo "/fs/mp/scripts/ethernet_starts.sh &">> /fs/mp/scripts/startup_script_functions.sh
#####################################################################################################################################################
#																Apply Patch and Mod																    #
#####################################################################################################################################################
echo "MODS_TOOLS" > /fs/rwdata/dev/mods_tools.txt
echo "DC_shadow">> /fs/mp/etc/installed_mods.txt
echo "DC_ethernet">> /fs/mp/etc/installed_mods.txt
sync
umount -f /fs/mp
chmod a+x /fs/rwdata/dev/*