#include <processed_numbers.h>
#include <full_adder.h>
#include <utils.h>

#if MODE == 1
#  ifndef NEXT_OP
#    ifndef NEXT_STEP
#      undef SOLUTION
#      define SOLUTION XJOIN(___, XSUM(XJOIN(_, X), XJOIN(_, Y), 0, 0, 0, 0, 0, 0))
#    else
#      ifndef NEXT_STEP2
#        undef SOLUTION3
#        define SOLUTION3 XJOIN(___, XSUM(XJOIN(_, X3), XJOIN(_, Y3), 0, 0, 0, 0, 0, 0))
#      else
#        undef SOLUTION4
#        define SOLUTION4 XJOIN(___, XSUM(XJOIN(_, X4), XJOIN(_, Y4), 0, 0, 0, 0, 0, 0))
#      endif
#    endif
#  else
#    undef SOLUTION2
#    define SOLUTION2 XJOIN(___, XSUM(XJOIN(_, X2), XJOIN(_, Y2), 0, 0, 0, 0, 0, 0))
#  endif
#else
#  ifndef NEXT_OP
#    ifndef NEXT_STEP
#      undef SOLUTION_
#      define SOLUTION_ XJOIN(___, XSUM(XJOIN(_, X_), XJOIN(_, Y_), 0, 0, 0, 0, 0, 0))
#    else
#      ifndef NEXT_STEP2
#        undef SOLUTION3_
#        define SOLUTION3_ XJOIN(___, XSUM(XJOIN(_, X3_), XJOIN(_, Y3_), 0, 0, 0, 0, 0, 0))
#      else
#        undef SOLUTION4_
#        define SOLUTION4_ XJOIN(___, XSUM(XJOIN(_, X4_), XJOIN(_, Y4_), 0, 0, 0, 0, 0, 0))
#      endif
#    endif
#  else
#    undef SOLUTION2_
#    define SOLUTION2_ XJOIN(___, XSUM(XJOIN(_, X2_), XJOIN(_, Y2_), 0, 0, 0, 0, 0, 0))
#  endif
#endif
