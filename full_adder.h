#pragma once

#define JOIN(a, b) a##b
#define XJOIN(a, b) JOIN(a, b)

#include <adds.h>

#define HALF_ADD(a, b) ADD##a##_##b

#define CARRY(a, b) CARRY2_##a##_##b

#define HALF_ADD3(a, b, c) HADD3_##a##_##b##_##c

#define XHALF_ADD3(a, b, c) HALF_ADD3(a, b, c)

#define CARRY3(a, b, c) CARRY3_##a##_##b##_##c

#define XCARRY3(a, b, c) CARRY3(a, b, c)

#define ADD_4DIGIT_NO_CARRY(a1, b1, a2, b2, a3, b3, a4, b4) XJOIN(XJOIN(XJOIN(XHALF_ADD3(a1, b1, XCARRY3(a2, b2, XCARRY3(a3, b3, CARRY(a4, b4)))), XHALF_ADD3(a2, b2, XCARRY3(a3, b3, CARRY(a4, b4)))), XHALF_ADD3(a3, b3, CARRY(a4, b4))), HALF_ADD(a4, b4))
