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

void print_p(void *ptr)
{ 
    unsigned long nbr;
    int len;

    nbr = (unsigned long)ptr;
    len = number_len(nbr);
    ft_putstr_fd(print_hex(nbr,len,'L'),1);
}
