#include <memlookup.h>
#if MODE == 1
#  define X MEM_ADDRESS
#  define Y 1
#  include <subtractor.h>
???/
?=undef MEM_ADDRESS_
???/
?=define MEM_ADDRESS_ SOLUTION
#else
#  define X_ MEM_ADDRESS_
#  define Y_ 1
#  include <subtractor.h>
???/
?=undef MEM_ADDRESS
???/
?=define MEM_ADDRESS SOLUTION_
#endif
#include <step.h>
