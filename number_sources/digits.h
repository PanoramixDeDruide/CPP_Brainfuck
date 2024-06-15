#ifndef ANTI_0
  #define ANTI_0 F
#endif
#ifndef ANTI_1
  #define ANTI_1 E
#endif
#ifndef ANTI_2
  #define ANTI_2 D
#endif
#ifndef ANTI_3
  #define ANTI_3 C
#endif
#ifndef ANTI_4
  #define ANTI_4 B
#endif
#ifndef ANTI_5
  #define ANTI_5 A
#endif
#ifndef ANTI_6
  #define ANTI_6 9
#endif
#ifndef ANTI_7
  #define ANTI_7 8
#endif
#ifndef ANTI_8
  #define ANTI_8 7
#endif
#ifndef ANTI_9
  #define ANTI_9 6
#endif
#ifndef ANTI_A
  #define ANTI_A 5
#endif
#ifndef ANTI_B
  #define ANTI_B 4
#endif
#ifndef ANTI_C
  #define ANTI_C 3
#endif
#ifndef ANTI_D
  #define ANTI_D 2
#endif
#ifndef ANTI_E
  #define ANTI_E 1
#endif
#ifndef ANTI_F
  #define ANTI_F 0
#endif
#define ANTI(x) ANTI_##x
#define XANTI(x) ANTI(x)

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
  #ifndef HUNDREDS
    #define HUNDREDS 0
    #undef REAL_HUNDREDS
    #define REAL_HUNDREDS 0
  #endif
  #ifndef THOUSANDS
    #define THOUSANDS 0
    #undef REAL_THOUSANDS
    #define REAL_THOUSANDS 0
  #endif
  #if THOUSANDS == 0
??=define XCONCAT(_, XCONCAT(REAL_HUNDREDS, XCONCAT(REAL_TENS, REAL_DIGITS))) REAL_THOUSANDS, REAL_HUNDREDS, REAL_TENS, REAL_DIGITS
??=define XCONCAT(__, XCONCAT(REAL_HUNDREDS, XCONCAT(REAL_TENS, REAL_DIGITS))) XANTI(REAL_THOUSANDS), XANTI(REAL_HUNDREDS), XANTI(REAL_TENS), XANTI(REAL_DIGITS)
    #if HUNDREDS == 0
??=define XCONCAT(_, XCONCAT(REAL_TENS, REAL_DIGITS)) REAL_THOUSANDS, REAL_HUNDREDS, REAL_TENS, REAL_DIGITS
??=define XCONCAT(__, XCONCAT(REAL_TENS, REAL_DIGITS)) XANTI(REAL_THOUSANDS), XANTI(REAL_HUNDREDS), XANTI(REAL_TENS), XANTI(REAL_DIGITS)
      #if TENS == 0
??=define XCONCAT(_, REAL_DIGITS) REAL_THOUSANDS, REAL_HUNDREDS, REAL_TENS, REAL_DIGITS
??=define XCONCAT(__, REAL_DIGITS) XANTI(REAL_THOUSANDS), XANTI(REAL_HUNDREDS), XANTI(REAL_TENS), XANTI(REAL_DIGITS)
??=define XCONCAT(___, XCONCAT(REAL_THOUSANDS, XCONCAT(REAL_HUNDREDS, XCONCAT(REAL_TENS, REAL_DIGITS)))) REAL_DIGITS
      #else
??=define XCONCAT(___, XCONCAT(REAL_THOUSANDS, XCONCAT(REAL_HUNDREDS, XCONCAT(REAL_TENS, REAL_DIGITS)))) XCONCAT(REAL_TENS, REAL_DIGITS)
      #endif
    #else
??=define XCONCAT(___, XCONCAT(REAL_THOUSANDS, XCONCAT(REAL_HUNDREDS, XCONCAT(REAL_TENS, REAL_DIGITS)))) XCONCAT(REAL_HUNDREDS, XCONCAT(REAL_TENS, REAL_DIGITS))
    #endif
  #else
??=define XCONCAT(___, XCONCAT(REAL_THOUSANDS, XCONCAT(REAL_HUNDREDS, XCONCAT(REAL_TENS, REAL_DIGITS)))) XCONCAT(REAL_THOUSANDS, XCONCAT(REAL_HUNDREDS, XCONCAT(REAL_TENS, REAL_DIGITS)))
  #endif
??=define XCONCAT(_, XCONCAT(REAL_THOUSANDS, XCONCAT(REAL_HUNDREDS, XCONCAT(REAL_TENS, REAL_DIGITS)))) REAL_THOUSANDS, REAL_HUNDREDS, REAL_TENS, REAL_DIGITS
??=define XCONCAT(__, XCONCAT(REAL_THOUSANDS, XCONCAT(REAL_HUNDREDS, XCONCAT(REAL_TENS, REAL_DIGITS)))) XANTI(REAL_THOUSANDS), XANTI(REAL_HUNDREDS), XANTI(REAL_TENS), XANTI(REAL_DIGITS)
  #include <digits.h>
#endif
