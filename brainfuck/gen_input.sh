#!/bin/bash

echo "#define _INPUT \\" > program_input.h
od -An -t x1 | tr -d '\n' | sed -E "s/^ //" | sed "s/ /, /g" | tr 'a-f' 'A-F' | sed -E "s/$/, EOF\n/" >> program_input.h
cat <<EOF >> program_input.h
#if MODE == 1
???/
?=undef PROGRAM_INPU???/
?/
T_
???/
?=define PROGRAM_INPU???/
?/
T_ _INPUT
#else
???/
?=undef PROGRAM_INPU???/
?/
T
???/
?=define PROGRAM_INPU???/
?/
T _INPUT
#endif
EOF
