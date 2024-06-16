#ifndef DIGITS
  #define DIGITS 0
  #undef REAL_DIGITS
  #define REAL_DIGITS 0
#elif DIGITS == 0
  #undef DIGITS
  #define DIGITS 1
  #undef REAL_DIGITS
  #define REAL_DIGITS 1
#elif DIGITS == 1
  #undef DIGITS
  #define DIGITS 2
  #undef REAL_DIGITS
  #define REAL_DIGITS 2
#elif DIGITS == 2
  #undef DIGITS
  #define DIGITS 3
  #undef REAL_DIGITS
  #define REAL_DIGITS 3
#elif DIGITS == 3
  #undef DIGITS
  #define DIGITS 4
  #undef REAL_DIGITS
  #define REAL_DIGITS 4
#elif DIGITS == 4
  #undef DIGITS
  #define DIGITS 5
  #undef REAL_DIGITS
  #define REAL_DIGITS 5
#elif DIGITS == 5
  #undef DIGITS
  #define DIGITS 6
  #undef REAL_DIGITS
  #define REAL_DIGITS 6
#elif DIGITS == 6
  #undef DIGITS
  #define DIGITS 7
  #undef REAL_DIGITS
  #define REAL_DIGITS 7
#elif DIGITS == 7
  #undef DIGITS
  #define DIGITS 8
  #undef REAL_DIGITS
  #define REAL_DIGITS 8
#elif DIGITS == 8
  #undef DIGITS
  #define DIGITS 9
  #undef REAL_DIGITS
  #define REAL_DIGITS 9
#elif DIGITS == 9
  #undef DIGITS
  #define DIGITS 10
  #undef REAL_DIGITS
  #define REAL_DIGITS A
#elif DIGITS == 10
  #undef DIGITS
  #define DIGITS 11
  #undef REAL_DIGITS
  #define REAL_DIGITS B
#elif DIGITS == 11
  #undef DIGITS
  #define DIGITS 12
  #undef REAL_DIGITS
  #define REAL_DIGITS C
#elif DIGITS == 12
  #undef DIGITS
  #define DIGITS 13
  #undef REAL_DIGITS
  #define REAL_DIGITS D
#elif DIGITS == 13
  #undef DIGITS
  #define DIGITS 14
  #undef REAL_DIGITS
  #define REAL_DIGITS E
#elif DIGITS == 14
  #undef DIGITS
  #define DIGITS 15
  #undef REAL_DIGITS
  #define REAL_DIGITS F
#elif DIGITS == 15
  #undef DIGITS
  #define DIGITS 16
  #undef REAL_DIGITS
  #define REAL_DIGITS 0
#endif
#define CONCAT(a, b) a##b
#define XCONCAT(a, b) CONCAT(a, b)
#if DIGITS < 16
  #ifndef TENS
    #define TENS 0
    #undef REAL_TENS
    #define REAL_TENS 0
  #endif
???/
?=define XCONCAT(_U00, XCONCAT(REAL_TENS, REAL_DIGITS)) ????/
?/
?/u00##REAL_TENS##REAL_DIGITS
  #include <digits.h>
#endif
