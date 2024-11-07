#!/bin/bash

echo "#define PROGRAM \\" > program.h
tr -c -d ",.<>[]+-" | sed "s/,/INPUT, /g" | sed "s/\\+/INCREMENT, /g" | sed "s/-/DECREMENT, /g" | sed "s/\\[/OPEN, /g" | sed "s/\\]/CLOSE, /g" | sed "s/</LEFT, /g" | sed "s/>/RIGHT, /g" | sed "s/\\./OUTPUT, /g" | sed -E "s/, $/, END/" >> program.h
