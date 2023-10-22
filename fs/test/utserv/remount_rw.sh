#!/bin/sh

for file in `mount | grep /fs/images/overlay | awk '{print $1;}'`; do
  umount /fs/mp
done

mount -uw /fs/mp
