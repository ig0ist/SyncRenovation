#!/bin/sh


mount -ur /fs/mp

for file in /fs/images/overlay*.img; do
  mount -b -r -t qnx6 -o before $file /fs/mp
done
