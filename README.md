# CPP_Brainfuck
A Brainfuck interpreter implemented in the C preprocessor, with a little help from Bash.

Borrows some code from [my CPP calculator](https://github.com/PanoramixDeDruide/CPP_Calculator)

TODO: Implement support for brackets exceeding 10 nested levels.

Preliminary HOWTO:
1. Generate some lookup tables with `generate_lookup_tables.sh`
2. `cd` into the `brainfuck` directory.
3. Execute `run.sh`. This will run a Hello World program (warning: pretty slow) taken from [Wikipedia](https://en.wikipedia.org/w/index.php?title=Brainfuck&oldid=1229044286)
4. Get a coffee while you wait for it to do its thing, or look at the mad internals with `watch -n 3 one.h` and/or `watch -n 3 two.h`.
