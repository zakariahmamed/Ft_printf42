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

## Evaluation Results

**42 School — ft_printf**

- **Final grade:** 100/100
- **Moulinette:** 8/8 mandatory tests passed
- **Peer evaluations:** 3 successful evaluations, each graded 100%
- **Live coding:** Successfully completed
- **Code quality:** Norminette compliant

The project was successfully validated through automated testing and peer evaluations, including edge-case verification, theoretical questions, and live coding exercises.

### Official Evaluation Screenshot

![ft_printf — 100% Evaluation](assets/ft_printf_success.png)

## Technical Skills Developed

Through this project, I strengthened my understanding of:

- Variadic functions and argument handling using `va_list`, `va_start`, `va_arg`, and `va_end`.
- Integer-to-string conversion and hexadecimal representation.
- Pointer representation and memory addressing.
- Low-level output using the `write` system call.
- Error handling, return values, and edge cases.
- Modular C programming and debugging.

The implementation was developed independently, with an emphasis on understanding and justifying each design decision.
## Resources

- C manual pages: `man 3 printf`, `man 3 stdarg`, `man 2 write`
- 42 ft_printf subject
- AI was used for theoretical explanations, debugging guidance, and testing suggestions. The implementation was written by the student.
