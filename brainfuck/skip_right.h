#include <memlookup.h>
#define OPEN 10000
#define CLOSE 10001
#define NEXT_STEP 1
#undef FOUND
#if MODE == 1
???/
?=undef DEPT???/
?/
H_
???/
?=define DEPT???/
?/
H_ DEPTH
#  if XPROGLOOKUP(SKIP_COUNTER) == OPEN
#    define X3 DEPTH
#    define Y3 1
#    include <adder.h>
???/
?=undef DEPT???/
?/
H_
???/
?=define DEPT???/
?/
H_ SOLUTION3
#  endif
#  if XPROGLOOKUP(SKIP_COUNTER) == CLOSE
#    if DEPTH != 0
#      define X3 DEPTH
#      define Y3 1
#      include <subtractor.h>
???/
?=undef DEPT???/
?/
H_
???/
?=define DEPT???/
?/
H_ SOLUTION3
#    else
#      define FOUND 1
#      define X3 SKIP_COUNTER
#      define Y3 1
#      include <adder.h>
#undef PROGRAM_COUNTER
#define PROGRAM_COUNTER SOLUTION3
#include <step.h>
#    endif
#  endif
#  define NEXT_STEP2 1
#  define X4 SKIP_COUNTER
#  define Y4 1
#  include <adder.h>
???/
?=undef SKIP_???/
?/
COUNTER_
???/
?=define SKIP_???/
?/
COUNTER_ SOLUTION4
#  ifndef FOUND
#    include <step_phase_1.h>
???/
?=    include <skip_right.h>
#  endif

#else
???/
?=undef DEPT???/
?/
H
???/
?=define DEPT???/
?/
H DEPTH_
#  if XPROGLOOKUP(SKIP_COUNTER_) == OPEN
#    define X3_ DEPTH_
#    define Y3_ 1
#    include <adder.h>
???/
?=undef DEPT???/
?/
H
???/
?=define DEPT???/
?/
H SOLUTION3_
#  endif
#  if XPROGLOOKUP(SKIP_COUNTER_) == CLOSE
#    if DEPTH_ != 0
#      define X3_ DEPTH_
#      define Y3_ 1
#      include <subtractor.h>
???/
?=undef DEPT???/
?/
H
???/
?=define DEPT???/
?/
H SOLUTION3_
#    else
#      define FOUND 1
#      define X3_ SKIP_COUNTER_
#      define Y3_ 1
#      include <adder.h>
#undef PROGRAM_COUNTER_
#define PROGRAM_COUNTER_ SOLUTION3_
#include <step.h>
#    endif
#  endif
#  define NEXT_STEP2 1
#  define X4_ SKIP_COUNTER_
#  define Y4_ 1
#  include <adder.h>
???/
?=undef SKIP_???/
?/
COUNTER
???/
?=define SKIP_???/
?/
COUNTER SOLUTION4_
#  ifndef FOUND
#    include <step_phase_1.h>
???/
?=include <skip_right.h>
#  endif
#endif
#undef NEXT_STEP
#undef NEXT_STEP2

