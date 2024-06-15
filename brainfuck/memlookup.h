#if MODE == 1
#  define MEMLOOKUP(x) MEMORY_##x
#  define XMEMLOOKUP(x) MEMLOOKUP(x)
#  define YMEMLOOKUP(x) MEMORY__##x
#  define ZMEMLOOKUP(x) YMEMLOOKUP(x)
#  define PROGLOOKUP(x) PROGRAM_##x
#  define XPROGLOOKUP(x) PROGLOOKUP(x)
#  define YPROGLOOKUP(x) PROGRAM__##x
#  define ZPROGLOOKUP(x) YPROGLOOKUP(x)
#else
#  define MEMLOOKUP(x) MEMORY__##x
#  define XMEMLOOKUP(x) MEMLOOKUP(x)
#  define YMEMLOOKUP(x) MEMORY_##x
#  define ZMEMLOOKUP(x) YMEMLOOKUP(x)
#  define PROGLOOKUP(x) PROGRAM__##x
#  define XPROGLOOKUP(x) PROGLOOKUP(x)
#  define YPROGLOOKUP(x) PROGRAM_##x
#  define ZPROGLOOKUP(x) YPROGLOOKUP(x)
#endif
