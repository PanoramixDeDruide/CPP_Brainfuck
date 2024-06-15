#include <memlookup.h>

#define NEXT_OP 1
#if MODE == 1
#  define X2 PROGRAM_COUNTER
#  define Y2 1
#  include <adder.h>
???/
?=undef PROGRAM_COUNTER_
???/
?=define PROGRAM_COUNTER_ SOLUTION2
XPROGLOOKUP(PROGRAM_COUNTER)
#else
#  define X2_ PROGRAM_COUNTER_
#  define Y2_ 1
#  include <adder.h>
???/
?=undef PROGRAM_COUNTER
???/
?=define PROGRAM_COUNTER SOLUTION2_
XPROGLOOKUP(PROGRAM_COUNTER_)
#endif
#undef NEXT_OP
