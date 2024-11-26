#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_UP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int ft_printf(const char *f, ...);
void print_c(int arg);
void print_d(int arg);
void print_s(char *arg);
void print_p(void *ptr);
void print_u(int nbr);
char *print_hex(unsigned long nbr,int len,char type);
void print_x(long nbr);
void print_X(long nbr);

#endif
