# inline-float-literals
A trick to get C++ floats to compile as inline integer literals.

Someone asked, is there an easy way to get a float literal stored in the function call's local stack rather than in the program data section, as with an integer? This was the simplest way I could think to do it (in theory). It seems to work with Clang and GCC if you use `-O1` or `-O2`. I don't recommend actually using it for anything.

For comparison, here's another approach to the idea: http://brnz.org/hbr/?p=1518
