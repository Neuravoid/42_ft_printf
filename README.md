
# ft_printf

Welcome to **ft_printf**, a project developed as part of the 42 curriculum.  
This project is a custom re-implementation of the standard C `printf` function.

The goal is to handle formatted output conversion by parsing format specifiers and producing correct output to the standard output.

## Project Overview

- Full recreation of the basic `printf` functionality.
- Supports multiple format specifiers, including:
  - `%c` - Character
  - `%s` - String
  - `%p` - Pointer address
  - `%d` - Decimal integer
  - `%i` - Integer
  - `%u` - Unsigned integer
  - `%x` - Lowercase hexadecimal
  - `%X` - Uppercase hexadecimal
  - `%%` - Percent sign

## Features

- Variadic functions using `stdarg.h`
- Handling different data types and format specifiers
- Correct memory management
- No use of standard library `printf`
- Fully norm-compliant (42 Norm)
- Extensible and modular code design

## Installation

### Requirements
- Unix-based OS (Linux / macOS)
- `gcc` compiler
- `make`

### Clone the repository
```bash
git clone https://github.com/Neuravoid/42_ft_printf.git
cd ft_printf
```

### Compile
```bash
make
```

This will produce a `libftprintf.a` archive file.

## Usage

You can compile and link your code with `libftprintf.a` like this:
```bash
gcc main.c libftprintf.a
```

Example usage inside `main.c`:
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "world", 42);
    return (0);
}
```

## Notes

- Manual handling of variadic arguments (`va_start`, `va_arg`, `va_end`).
- Recursive or iterative conversion of integers and pointers to strings.
- Proper output length calculation and return value.
- No memory leaks, verified with `valgrind`.

## License

This project is part of the 42 School curriculum and follows its academic honesty policy.
