#pragma once

#define ARGN(N, LIST) XJOIN(ARG_, N)LIST
#define ARG_0(A0, ...) A0
#define ARG_1(A0, A1, ...) A1
#define ARG_2(A0, A1, A2, ...) A2
#define ARG_3(A0, A1, A2, A3, ...) A3
