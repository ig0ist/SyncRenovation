#!/bin/sh


###################################################################################
# Function: START_DTOOLS
#
# This function starts up ethernet, qconn, and inetd (telnet + ftp + ssh)
###################################################################################
function START_DTOOLS
{
   devc-pty &
   
   # wait for debug stack
   waitfor /debug/dev/socket

   SOCK=/debug inetd /fs/mp/etc/inetd.conf &
   SOCK=/debug qconn &
   
   # wait for first stack
   waitfor /dev/socket
}
###################################################################################