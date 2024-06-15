#ifndef TENS
  #define TENS 0
  #undef REAL_TENS
  #define REAL_TENS 0
#elif TENS == 0
  #undef TENS
  #define TENS 1
  #undef REAL_TENS
  #define REAL_TENS 1
#elif TENS == 1
  #undef TENS
  #define TENS 2
  #undef REAL_TENS
  #define REAL_TENS 2
#elif TENS == 2
  #undef TENS
  #define TENS 3
  #undef REAL_TENS
  #define REAL_TENS 3
#elif TENS == 3
  #undef TENS
  #define TENS 4
  #undef REAL_TENS
  #define REAL_TENS 4
#elif TENS == 4
  #undef TENS
  #define TENS 5
  #undef REAL_TENS
  #define REAL_TENS 5
#elif TENS == 5
  #undef TENS
  #define TENS 6
  #undef REAL_TENS
  #define REAL_TENS 6
#elif TENS == 6
  #undef TENS
  #define TENS 7
  #undef REAL_TENS
  #define REAL_TENS 7
#elif TENS == 7
  #undef TENS
  #define TENS 8
  #undef REAL_TENS
  #define REAL_TENS 8
#elif TENS == 8
  #undef TENS
  #define TENS 9
  #undef REAL_TENS
  #define REAL_TENS 9
#elif TENS == 9
  #undef TENS
  #define TENS 10
  #undef REAL_TENS
  #define REAL_TENS A
#elif TENS == 10
  #undef TENS
  #define TENS 11
  #undef REAL_TENS
  #define REAL_TENS B
#elif TENS == 11
  #undef TENS
  #define TENS 12
  #undef REAL_TENS
  #define REAL_TENS C
#elif TENS == 12
  #undef TENS
  #define TENS 13
  #undef REAL_TENS
  #define REAL_TENS D
#elif TENS == 13
  #undef TENS
  #define TENS 14
  #undef REAL_TENS
  #define REAL_TENS E
#elif TENS == 14
  #undef TENS
  #define TENS 15
  #undef REAL_TENS
  #define REAL_TENS F
#elif TENS == 15
  #undef TENS
  #define TENS 16
  #undef REAL_TENS
  #define REAL_TENS 0
#endif
#if TENS < 16
  #undef DIGITS
  #include <digits.h>
  #include <tens.h>
#endif
