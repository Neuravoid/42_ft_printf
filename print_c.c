#include "ft_printf.h"

void print_c(int arg)
{
    char a;
    
    a = arg;
    write(1, &a, 1);
}
