#!/bin/bash

vals=(0 1 2 3 4 5 6 7 8 9 A B C D E F)
for digit1 in "${vals[@]}"; do
  for digit2 in "${vals[@]}"; do
    added=`echo "obase=16;ibase=16;($digit1+$digit2)%10" | bc`
    carry=`echo "obase=16;ibase=16;($digit1+$digit2)/10" | bc`
    added1=`echo "obase=16;ibase=16;($digit1+$digit2+1)%10" | bc`
    carry1=`echo "obase=16;ibase=16;($digit1+$digit2+1)/10" | bc`
    echo "#define ADD${digit2}_${digit1} ${added}"
    echo "#define CARRY2_${digit2}_${digit1} ${carry}"
    echo "#define HADD3_${digit2}_${digit1}_0 ${added}"
    echo "#define CARRY3_${digit2}_${digit1}_0 ${carry}"
    echo "#define HADD3_${digit2}_${digit1}_1 ${added1}"
    echo "#define CARRY3_${digit2}_${digit1}_1 ${carry1}"
  done
done
