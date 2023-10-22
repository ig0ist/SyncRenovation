#!/bin/sh
#########################################################################################################################################################
#                                                         Installation Script for SSD Daemon                                                            #
#########################################################################################################################################################

# Mod Name      : OpenSSH tools
# Author        : bigunclemax

#########################################################################################################################################################
#   Environment variables                                                                                                                               #
#########################################################################################################################################################

SSHD_PORT=22

FILES_DIR="/fs/usb0/SyncMyMod/files"

# Mod Tools string
MODTOOLS="MODS_TOOLS"

#########################################################################################################################################################
#   Functions                                                                                                                                           #
#########################################################################################################################################################

POPUP=/tmp/popup.txt
echo "" > $POPUP

function displayMessage {
    echo "${1}" >> $POPUP
    /fs/rwdata/dev/utserviceutility popup $POPUP
}

function reboot {
    /fs/rwdata/dev/utserviceutility reboot
}

function wait_for_usb_detach_and_reboot {
	while [ -e /fs/usb0 ]; do
		sleep 1
	done

	reboot

	exit 0
}

function displayImage {
	slay APP_SUM
	slay -s 9 NAV_Manager
	slay -s 9 fordhmi
	slay HMI_AL
	display_image -file=/fs/usb0/SyncMyMod/installation_${1}.png -display=2 &
}

function checkModTools {
	grep -q ${MODTOOLS} /fs/rwdata/dev/mods_tools.txt
	if [ $? -ne 0 ]; then
		displayImage "aborted"
		wait_for_usb_detach_and_reboot
	fi
	chmod a+x /fs/rwdata/dev/*
}

########################
#        Main          #
########################
displayImage "start"
sleep 1

checkModTools

. /fs/rwdata/dev/remount_rw.sh
sync

# installing openssh
(cd / && unzip -o ${FILES_DIR}/sync3_open_ssh.zip)

# installing authorized_keys
mkdir -p /fs/rwdata/.ssh/
cp ${FILES_DIR}/authorized_keys /fs/rwdata/.ssh/
# chmod go-w 	/fs/rwdata/ 		# you can try to uncomment this line and set 'StrictModes yes' in sshd_config
chmod 700 	/fs/rwdata/.ssh
chmod 600 	/fs/rwdata/.ssh/authorized_keys

# add sshd to Startup Script
echo "/fs/mp/usr/sbin/sshd -p ${SSHD_PORT} -f /fs/mp/etc/sshd_config &" >> /fs/mp/scripts/startup_gf.sh

sync
. /fs/rwdata/dev/remount_ro.sh
sync

displayImage "completed"
wait_for_usb_detach_and_reboot
