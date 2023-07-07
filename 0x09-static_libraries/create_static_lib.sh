#!/bin/bash

# compile the code to cerate object files
gcc -c *.c
# create the "liball.a" static library
# containing the object files using the achiver "ar",
# where "liball.a" ia an achive file.
ar rc liball.a *.o
# index the achive using the "ranlib" command.
ranlib liball.a
