#!/bin/bash

if [[ ! -f empty_memory.h ]]; then
	cpp -P -Wno-trigraphs -I empty_memory empty_memory/numbers.h -o empty_memory.h
fi

if [[ ! -f empty_memory_2.h ]]; then
	cpp -P -Wno-trigraphs -I empty_memory_2 empty_memory_2/numbers.h -o empty_memory_2.h
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
