# CPP_Brainfuck
A Brainfuck interpreter implemented in the C preprocessor, with a little help from Bash.

Borrows some code from [my CPP calculator](https://github.com/PanoramixDeDruide/CPP_Calculator)

Prerequisites:
- GNU GCC C preprocessor (as `cpp` in `PATH`)
- Bash
- Patience

HOWTO:
1. Generate some lookup tables with `generate_lookup_tables.sh`
2. `cd` into the `brainfuck` directory
3. Sample programs include a Hello World program from Wikipedia, a ROT13 program from Wikipedia, and a Mandelbrot set visualizer (from [here](https://esoteric.sange.fi/brainfuck/utils/mandelbrot/)) and can be found in the `sample_programs/` directory
4. Translate your input (if used by your program) to something the preprocessor can work with with `gen_input.sh` (I.E. `echo "Hello World!" | ./gen_input.sh`)
4. Copy a sample program to the file `program.h` or create your own one with `gen_program.sh` (I.E. `echo ",.." | ./gen_program.sh`)
5. Run ./run.py
6. Wait for it to complete. WARNING: It took my AMD Ryzen 5 5600X over a week to buffer just six characters from the visualized Mandelbrot set. Output will be presented to you in your terminal once done.

