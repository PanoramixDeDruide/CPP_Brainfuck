#!/usr/bin/env python

import subprocess

p = subprocess.run(['clang-cpp-16', '-P', '-Wno-trigraphs', '-trigraphs', '-I', '.', '-I', '..', 'parse_program.h'], capture_output=True, text=True)
pl = p.stdout

while True:
  p = subprocess.run(['clang-cpp-16', '-x',  'c', '-P', '-Wno-trigraphs', '-trigraphs', '-I', '.', '-I', '..', '-'], input=pl, capture_output=True, text=True)
  pl = p.stdout
  if ("Program terminated" in pl):
    final = """#include <character_table.h>
#define PROCESS(a, b) a##b
#define XPROCESS(a, b) PROCESS(a, b)
#if MODE == 1
TO_OUTPUT
#else
TO_OUTPUT_
#endif"""
    pl = pl + final
    p = subprocess.run(['cpp', '-x',  'c', '-P', '-Wno-trigraphs', '-trigraphs', '-I', '.', '-I', '..', '-'], input=pl, capture_output=True, text=True)
    pl = p.stdout
    p = subprocess.run(['cpp', '-x',  'c', '-P', '-Wno-trigraphs', '-trigraphs', '-I', '.', '-I', '..', '-'], input=pl, stderr=subprocess.DEVNULL, text=True)
    break
