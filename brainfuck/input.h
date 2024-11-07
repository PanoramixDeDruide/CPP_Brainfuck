#include <memlookup.h>

#define EOF 10003

#define JOIN(a, b) a##b
#define XJOIN(a, b) JOIN(a, b)

#define INPUTX(N, LIST) XJOIN(INPUT_, N) LIST
#define INPUT_0(a, ...) a
#define INPUT_1(a, ...) __VA_ARGS__

#if MODE == 1
# if INPUTX(0, (INPUT)) != EOF
???/
?=undef ZMEMLOOKUP(MEM_ADDRESS)
???/
?=define ZMEMLOOKUP(MEM_ADDRESS) INPUTX(0, (PROGRAM_INPUT))
???/
?=undef PROGRAM_INPU???/
?/
T_
???/
?=define PROGRAM_INPU???/
?/
T_ INPUTX(1, (PROGRAM_INPUT))
# endif
#else
# if INPUTX(0, (INPUT_)) != EOF
???/
?=undef ZMEMLOOKUP(MEM_ADDRESS_)
???/
?=define ZMEMLOOKUP(MEM_ADDRESS_) INPUTX(0, (PROGRAM_INPUT_))
???/
?=undef PROGRAM_INPU???/
?/
T
???/
?=define PROGRAM_INPU???/
?/
T INPUTX(1, (PROGRAM_INPUT_))
# endif
#endif
#include <step.h>
