#include <memlookup.h>
#if MODE == 1
#  define X XMEMLOOKUP(MEM_ADDRESS)
#  define Y 1
#  include <adder.h>
???/
?=undef ZMEMLOOKUP(MEM_ADDRESS)
???/
?=define ZMEMLOOKUP(MEM_ADDRESS) SOLUTION
#else
#  define X_ XMEMLOOKUP(MEM_ADDRESS_)
#  define Y_ 1
#  include <adder.h>
???/
?=undef ZMEMLOOKUP(MEM_ADDRESS_)
???/
?=define ZMEMLOOKUP(MEM_ADDRESS_) SOLUTION_
#endif
#include <step.h>
