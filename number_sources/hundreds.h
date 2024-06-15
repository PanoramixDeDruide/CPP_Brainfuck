#ifndef HUNDREDS
  #define HUNDREDS 0
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS 0
#elif HUNDREDS == 0
  #undef HUNDREDS
  #define HUNDREDS 1
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS 1
#elif HUNDREDS == 1
  #undef HUNDREDS
  #define HUNDREDS 2
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS 2
#elif HUNDREDS == 2
  #undef HUNDREDS
  #define HUNDREDS 3
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS 3
#elif HUNDREDS == 3
  #undef HUNDREDS
  #define HUNDREDS 4
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS 4
#elif HUNDREDS == 4
  #undef HUNDREDS
  #define HUNDREDS 5
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS 5
#elif HUNDREDS == 5
  #undef HUNDREDS
  #define HUNDREDS 6
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS 6
#elif HUNDREDS == 6
  #undef HUNDREDS
  #define HUNDREDS 7
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS 7
#elif HUNDREDS == 7
  #undef HUNDREDS
  #define HUNDREDS 8
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS 8
#elif HUNDREDS == 8
  #undef HUNDREDS
  #define HUNDREDS 9
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS 9
#elif HUNDREDS == 9
  #undef HUNDREDS
  #define HUNDREDS 10
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS A
#elif HUNDREDS == 10
  #undef HUNDREDS
  #define HUNDREDS 11
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS B
#elif HUNDREDS == 11
  #undef HUNDREDS
  #define HUNDREDS 12
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS C
#elif HUNDREDS == 12
  #undef HUNDREDS
  #define HUNDREDS 13
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS D
#elif HUNDREDS == 13
  #undef HUNDREDS
  #define HUNDREDS 14
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS E
#elif HUNDREDS == 14
  #undef HUNDREDS
  #define HUNDREDS 15
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS F
#elif HUNDREDS == 15
  #undef HUNDREDS
  #define HUNDREDS 16
  #undef REAL_HUNDREDS
  #define REAL_HUNDREDS 0
#endif
#if HUNDREDS < 16
  #undef DIGITS
  #undef TENS
  #include <digits.h>
  #include <tens.h>
  #include <hundreds.h>
#endif
