#!/bin/bash

if [[ ! -f memory.h ]]; then
	cpp -P -Wno-trigraphs -I memory memory/numbers.h -o memory.h
fi

if [[ ! -f memory_2.h ]]; then
	cpp -P -Wno-trigraphs -I memory_2 memory_2/numbers.h -o memory_2.h
fi


if [[ ! -f program_memory.h ]]; then
	cpp -P -Wno-trigraphs -I program_memory program_memory/numbers.h -o program_memory.h
fi

if [[ ! -f program_memory_2.h ]]; then
	cpp -P -Wno-trigraphs -I program_memory_2 program_memory_2/numbers.h -o program_memory_2.h
fi

if [[ ! -f non_zero.h ]]; then
	cpp -P -Wno-trigraphs -I non_zero non_zero/numbers.h -o non_zero.h
fi

if [[ ! -f processed_numbers.h ]]; then
	cpp -P -Wno-trigraphs -I number_sources number_sources/numbers.h -o processed_numbers.h
fi

if [[ ! -f adds.h ]]; then
	./extended_adder.sh > adds.h
fi

if [[ ! -f character_table.h ]]; then
	cpp -P -Wno-trigraphs -trigraphs -I character_table character_table/numbers.h -o character_table.h
fi
