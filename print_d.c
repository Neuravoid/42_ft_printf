#include "ft_printf.h"
void print_d(int arg)
{
    char *a;
    int len;

    a = ft_itoa(arg);
    len = ft_strlen(a);
    write(1, a, len);
}