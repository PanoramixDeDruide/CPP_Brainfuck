#include <memlookup.h>

#define JOIN(a, b) a##b
#define XJOIN(a, b) JOIN(a, b)

#define OPX(N, LIST) XJOIN(OP_, N) LIST
#define OP_0(a, ...) a
#define OP_1(a, ...) __VA_ARGS__
#define OTHER_OPS(a, ...) __VA_ARGS__

#define NEXT_OP 1
#if MODE == 1
#  define X2 PROGRAM_COUNTER
#  define Y2 1
#  include <adder.h>
???/
?=undef PROGRAM_COUNTER_
???/
?=define PROGRAM_COUNTER_ SOLUTION2
???/
?=undef OLD_PROGRAM_COUNTER_
???/
?=define OLD_PROGRAM_COUNTER_ PROGRAM_COUNTER
???/
?=undef ZPROGLOOKUP(PROGRAM_COUNTER)
???/
?=define ZPROGLOOKUP(PROGRAM_COUNTER) OPX(0, (PROGRAM))
???/
?=undef PROGRA???/
?/
M_
???/
?=define PROGRA???/
?/
M_ OPX(1, (PROGRAM))
#include <parse_step_phase_1.h>
???/
?=include <done_check.h>
#else
#  define X2_ PROGRAM_COUNTER_
#  define Y2_ 1
#  include <adder.h>
???/
?=undef PROGRAM_COUNTER
???/
?=define PROGRAM_COUNTER SOLUTION2_
???/
?=undef OLD_PROGRAM_COUNTER
???/
?=define OLD_PROGRAM_COUNTER PROGRAM_COUNTER_
???/
?=undef ZPROGLOOKUP(PROGRAM_COUNTER_)
???/
?=define ZPROGLOOKUP(PROGRAM_COUNTER_) OPX(0, (PROGRAM_))
???/
?=undef PROGRA???/
?/
M
???/
?=define PROGRA???/
?/
M OPX(1, (PROGRAM_))
#include <parse_step_phase_1.h>
???/
?=include <done_check.h>
#endif
