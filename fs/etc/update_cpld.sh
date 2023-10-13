if [ -d /etc/firmware/ ] ; then
	cpld update /etc/firmware/
	if [ $? -ne 0 ]; then		
		echo "Failed to update CPLD firmware"			
	fi	
fi  
