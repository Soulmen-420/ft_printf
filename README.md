README.md
PRINTF Project

Project Overview

PRINTF is a 42 Project that aims to mimic libc printf function

Basics, requested from subject:

A) parsing for flags, field_width, precision, length_modifier.
B) parsing for conversion specifier.
C) displaying UTF-8 characters. (%C and %S).
D) computing unsigned numbers in base 2 (%b), 8 (%o), 10 (%u) and 16 (%x).
E) displaying signed numbers (%d %D %i).
F) displaying pointer address (%p).

The va_list Type

The va_list type is an array containing a single element of one structure containing the necessary information to implement the va_arg macro. The C deﬁnition of va_list type is given in ﬁgure 3.34

// Figure 3.34
typedef struct {
   unsigned int gp_offset;
   unsigned int fp_offset;
   void *overflow_arg_area;
   void *reg_save_area;
} va_list[1];

The va_start Macro

The va_start macro initializes the structure as follows:

reg_save_area The element points to the start of the register save area.

overﬂow_arg_area This pointer is used to fetch arguments passed on the stack. It is initialized with the address of the ﬁrst argument passed on the stack, if any, and then always updated to point to the start of the next argument on the stack.

gp_offset The element holds the offset in bytes from reg_save_area to the place where the next available general purpose argument register is saved. In case all argument registers have been exhausted, it is set to the value 48 (6 ∗ 8).

fp_offset The element holds the offset in bytes from reg_save_area to the place where the next available ﬂoating point argument register is saved. In case all argument registers have been exhausted, it is set to the value 304 (6 ∗ 8 + 16 ∗ 16).

https://linux.die.net/man/3/printf

https://android.googlesource.com/kernel/lk/+/master/lib/libc/printf.c

https://en.cppreference.com/w/cpp/io/c/fprintf
