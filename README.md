# ft_printf

*This project has been created as part of the 42 curriculum by zahmamed.*

## Description

**ft_printf** is a reimplementation of the standard C `printf` function.

The goal is to understand variadic functions, formatted output, pointers, recursion, and low-level I/O using the `write` system call.

## Supported Conversions

- `%c` — Character
- `%s` — String
- `%p` — Pointer address
- `%d` / `%i` — Signed decimal integer
- `%u` — Unsigned decimal integer
- `%x` / `%X` — Hexadecimal integer
- `%%` — Percent sign

## Instructions

Compile the library using:

```bash
make
```

This generates `libftprintf.a`, which can be linked to a C program.

## Resources

- C manual pages: `man 3 printf`, `man 3 stdarg`, `man 2 write`
- 42 ft_printf subject
- AI was used for theoretical explanations, debugging guidance, and testing suggestions. The implementation was written by the student.
