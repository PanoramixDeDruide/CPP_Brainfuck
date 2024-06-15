#!/bin/bash

cpp -P -Wno-trigraphs -trigraphs -I . -I .. kickstarter.h > one.h 2> /dev/null
while [[ 1 -eq 1 ]]; do
    grep -q "Program terminated" one.h
    res=$?
    if [[ $res -eq 0 ]]; then
      broken=1
      break
    fi
    cpp -P -Wno-trigraphs -trigraphs -I . -I .. one.h > two.h 2> /dev/null
    grep -q "Program terminated" two.h
    res=$?
    if [[ $res -eq 0 ]]; then
      broken=2
      break
    fi
    cpp -P -Wno-trigraphs -trigraphs -I . -I .. two.h > one.h 2> /dev/null
done
if [[ $broken -eq 1 ]]; then
  cpp -P -Wno-trigraphs -trigraphs -I . -I .. one.h 2> /dev/null
else
  cpp -P -Wno-trigraphs -trigraphs -I . -I .. two.h 2> /dev/null
fi
rm -f one.h two.h
