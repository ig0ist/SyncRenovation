#!/bin/sh
echo "Install PRE RUN" >> /fs/usb0/custom_log.txt
# ....
echo "Hellow worl _ PRE!" >> /fs/usb0/hellow.txt
# Bla bla install PRE Files Graphics,lib.so....
# ....
sleep 1
# Exit 
echo "Install PRE DONE" >> /fs/usb0/custom_log.txt
echo "EXIT" >> /tmp/status_update_custom_pre