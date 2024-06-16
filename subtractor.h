#include <processed_numbers.h>
#include <full_adder.h>
#include <utils.h>

#if MODE == 1
#  if !(defined (NEXT_OP) || defined(NEXT_STEP))
#    undef SOLUTION
#    define SOLUTION XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, X), XJOIN(__, Y), 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0))
#  elif !(defined (NEXT_OP) || defined(NEXT_STEP2))
#    undef SOLUTION3
#    define SOLUTION3 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, X3), XJOIN(__, Y3), 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0))
#  elif !defined (NEXT_OP) && defined(NEXT_STEP2)
#    undef SOLUTION4
#    define SOLUTION4 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, X4), XJOIN(__, Y4), 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0))
#  else
#    undef SOLUTION2
#    define SOLUTION2 XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, X2), XJOIN(__, Y2), 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0))
#  endif
#else
#  if !(defined (NEXT_OP) || defined(NEXT_STEP))
#    undef SOLUTION_
#    define SOLUTION_ XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, X_), XJOIN(__, Y_), 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0))
#  elif !(defined (NEXT_OP) || defined(NEXT_STEP2))
#    undef SOLUTION3_
#    define SOLUTION3_ XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, X3_), XJOIN(__, Y3_), 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0))
#  elif !defined (NEXT_OP) && defined(NEXT_STEP2)
#    undef SOLUTION4_
#    define SOLUTION4_ XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, X4_), XJOIN(__, Y4_), 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0))
#  else
#    undef SOLUTION2_
#    define SOLUTION2_ XJOIN(___, XSUM(XJOIN(_, XSUM(XJOIN(_, X2_), XJOIN(__, Y2_), 0, 0, 0, 0, 0, 0)), _1, 0, 0, 0, 0, 0, 0))
#  endif
#endif
