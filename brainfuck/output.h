#include <memlookup.h>
#include <processed_numbers.h>
#define CONCAT_OUTPUT(a, ...) XPROCESS(a, __VA_ARGS__)
#define PRINT_NUMBER(x1,x2,x3,x4,...) _U00##x3##x4

#define XPRINT_NUMBER(x1,x2,x3,x4,...) PRINT_NUMBER(x1,x2,x3,x4)

#define OUTPUT_NUMBER(x) _##x
#define XOUTPUT_NUMBER(x) OUTPUT_NUMBER(x)

#if MODE == 1
???/
?=define TO_???/
?/
OUTPUT_ CONCAT_OUTPUT(TO_OUTPUT, XPRINT_NUMBER(XOUTPUT_NUMBER(XMEMLOOKUP(MEM_ADDRESS)), 0, 0, 0))
#else
???/
?=define TO_???/
?/
OUTPUT CONCAT_OUTPUT(TO_OUTPUT_, XPRINT_NUMBER(XOUTPUT_NUMBER(XMEMLOOKUP(MEM_ADDRESS_)), 0, 0, 0))
#endif
#include <step.h>
