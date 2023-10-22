#!/bin/sh

###################################################################################
### Launch: Debug tools
### telnet/ftp/ssh
###################################################################################
echo "Startup::Starting Debug Tools"  >> /tmp/startup.txt
START_DTOOLS
###################################################################################

if [ -f /fs/rwdata/dev/shadow.img ] ; then
	mount -b -r -t qnx6 -o snapshot=0,noatime /fs/rwdata/dev/shadow.img /etc
	if [ $? -ne 0 ]; then
		echo "Failed to mount shadow"
	fi
fi
done