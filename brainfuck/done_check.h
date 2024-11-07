#include <memlookup.h>
#define END 10002
#if MODE == 1
#  if XPROGLOOKUP(OLD_PROGRAM_COUNTER) != END
#    undef END
#    include <parse_step.h>
#  else
#    undef END
#    undef MODE
#    define MODE 1
#    undef MEM_ADDRESS
#    define MEM_ADDRESS 0
#    undef PROGRAM_COUNTER
#    define PROGRAM_COUNTER 0
#    undef TO_OUTPUT
#    define TO_OUTPUT
#    include <program_input.h>
#    include <kickstart_memory.h>
#    include <memory.h>
#    include <step.h>
#  endif
#else
#  if XPROGLOOKUP(OLD_PROGRAM_COUNTER_) != END
#    undef END
#    include <parse_step.h>
#  else
#    undef END
#    undef MODE
#    define MODE 2
#    undef MEM_ADDRESS_
#    define MEM_ADDRESS_ 0
#    undef PROGRAM_COUNTER_
#    define PROGRAM_COUNTER_ 0
#    undef TO_OUTPUT_
#    define TO_OUTPUT_
#    include <program_input.h>
#    include <kickstart_memory_2.h>
#    include <memory_2.h>
#    include <step.h>
#  endif
#endif
#undef END
