#!/bin/sh
#########################################################
## Configuring emmc driver based on variant info
#########################################################

/usr/sbin/hwid > /tmp/hwinfo

if [ -e /tmp/hwinfo ] ; then
	. /tmp/hwinfo
fi

#Start emmc driver in correct setting
if [ "$MY" -ge "1850" ]; then
	echo "HS200 enabled"
	on -p 65 devb-sdmmc-omap5evm qnx6 alignio disk maxio=4096 blk cache=10M,maxio=512,maxdio=4096,ra=128k:256k,rapolicy=aggressive cam quiet,resmgr,cache,async sdio timing=hs200,~ac12 &

else	
	echo "HS200 disabled"
	on -p 65 devb-sdmmc-omap5evm qnx6 alignio disk maxio=4096 blk cache=10M,maxio=512,maxdio=4096,ra=128k:256k,rapolicy=aggressive cam quiet,resmgr,cache,async sdio timing=~hs200,~ac12 &
fi

