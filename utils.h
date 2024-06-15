#pragma once

#define SUM(a, b, c, d, e, f, g, h, ...) ADD_4DIGIT_NO_CARRY(a, e, b, f, c, g, d, h)
#define XSUM(a, b, c, d, e, f, g, h, ...) SUM(a, b, c, d, e, f, g, h)

#define ASSEMBLE(a1, a2, a3, a4, ...) XJOIN(___, XJOIN(ARGN(0, (a1, 0, 0, 0, 0, 0)), XJOIN(ARGN(1, (a1, 0, 0, 0, 0, 0)), XJOIN(ARGN(2, (a1, 0, 0, 0, 0, 0)), ARGN(3, (a1, 0, 0, 0, 0, 0))))))
