#include "ft_printf.h"
static int number_len(unsigned long nbr)
{
    int len;
    
    len = 0;
    while(nbr>0)
    {
        len++;
        nbr /= 16;
    }
    return len;
}

void print_x(long nbr)
{
    int len;
    char *a;

    len = number_len(nbr);
    
    a = print_hex(nbr,len,'L');
    ft_putstr_fd(a+2,1);
}