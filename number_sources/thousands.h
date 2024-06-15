#ifndef THOUSANDS
  #define THOUSANDS 0
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS 0
#elif THOUSANDS == 0
  #undef THOUSANDS
  #define THOUSANDS 1
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS 1
#elif THOUSANDS == 1
  #undef THOUSANDS
  #define THOUSANDS 2
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS 2
#elif THOUSANDS == 2
  #undef THOUSANDS
  #define THOUSANDS 3
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS 3
#elif THOUSANDS == 3
  #undef THOUSANDS
  #define THOUSANDS 4
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS 4
#elif THOUSANDS == 4
  #undef THOUSANDS
  #define THOUSANDS 5
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS 5
#elif THOUSANDS == 5
  #undef THOUSANDS
  #define THOUSANDS 6
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS 6
#elif THOUSANDS == 6
  #undef THOUSANDS
  #define THOUSANDS 7
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS 7
#elif THOUSANDS == 7
  #undef THOUSANDS
  #define THOUSANDS 8
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS 8
#elif THOUSANDS == 8
  #undef THOUSANDS
  #define THOUSANDS 9
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS 9
#elif THOUSANDS == 9
  #undef THOUSANDS
  #define THOUSANDS 10
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS A
#elif THOUSANDS == 10
  #undef THOUSANDS
  #define THOUSANDS 11
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS B
#elif THOUSANDS == 11
  #undef THOUSANDS
  #define THOUSANDS 12
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS C
#elif THOUSANDS == 12
  #undef THOUSANDS
  #define THOUSANDS 13
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS D
#elif THOUSANDS == 13
  #undef THOUSANDS
  #define THOUSANDS 14
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS E
#elif THOUSANDS == 14
  #undef THOUSANDS
  #define THOUSANDS 15
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS F
#elif THOUSANDS == 15
  #undef THOUSANDS
  #define THOUSANDS 16
  #undef REAL_THOUSANDS
  #define REAL_THOUSANDS 0
#endif
#if THOUSANDS < 16
  #undef DIGITS
  #undef TENS
  #undef HUNDREDS
  #include <digits.h>
  #include <tens.h>
  #include <hundreds.h>
  #include <thousands.h>
#endif
