#include <memlookup.h>
#include <processed_numbers.h>

#define PRINT_NUMBER(x1,x2,x3,x4,...) ???/
?/u00##x3##x4

#define XPRINT_NUMBER(x1,x2,x3,x4,...) PRINT_NUMBER(x1,x2,x3,x4)

#define OUTPUT_NUMBER(x) _##x
#define XOUTPUT_NUMBER(x) OUTPUT_NUMBER(x)

#if MODE == 1
XPRINT_NUMBER(XOUTPUT_NUMBER(XMEMLOOKUP(MEM_ADDRESS)), 0, 0, 0)
#else
XPRINT_NUMBER(XOUTPUT_NUMBER(XMEMLOOKUP(MEM_ADDRESS_)), 0, 0, 0)
#endif
#include <step.h>
