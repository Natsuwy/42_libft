# libft

A C library implementation of standard C functions and additional utilities.

## Functions

This library includes implementations of:
- Character checking functions (`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, etc.)
- String functions (`ft_strlen`, `ft_strchr`, `ft_strdup`, `ft_split`, etc.)
- Memory functions (`ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_calloc`, etc.)
- Conversion functions (`ft_atoi`, `ft_itoa`)
- Linked list functions (`ft_lstnew`, `ft_lstadd_back`, `ft_lstiter`, etc.)
- File descriptor output functions (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putnbr_fd`, etc.)

## Usage

Compile the library:
```bash
make
```

Clean up compiled files:
```bash
make clean
```

Remove all generated files:
```bash
make fclean
```

Recompile everything:
```bash
make re
```

## Files

- `libft.h` - Header file with function declarations
- `Makefile` - Build configuration
- Individual `.c` files for each function implementation
