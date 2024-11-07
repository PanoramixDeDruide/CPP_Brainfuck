#!/usr/bin/env python 

import subprocess

og = open("one.h", "r")
pl = og.read()
og.close()
lines = pl.splitlines(keepends=False)
theline = lines[3]
len_old = len(theline)

i = 0
j = 0
print(theline)
while True:
  p = subprocess.run(['clang-cpp-16', '-x',  'c', '-P', '-Wno-trigraphs', '-trigraphs', '-I', '.', '-I', '..', '-'], input=pl, capture_output=True, text=True)
  pl = p.stdout
  lines = pl.splitlines(keepends=False)
  theline2 = lines[3]
  len_new = len(theline2)
  if (len_new > len_old and len_new - len_old > 3):
    theline = theline2
    len_old = len(theline)
    print(theline)
  i = i + 1
  if (i == 1000):
    i = 0
    out = open("logging/" + str(j) + ".log", "w")
    out.write(pl)
    out.close()
    j = j + 1
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
    p = subprocess.run(['cpp', '-x',  'c', '-P', '-Wno-trigraphs', '-trigraphs', '-I', '.', '-I', '..', '-'], input=pl, capture_output=True, text=True)
    pl = p.stdout
    out = open("logging/finished.log", "w")
    out.write(pl)
    out.close()
    break

og = open("logging/finished.log", "r")
print(og.read())
og.close()
