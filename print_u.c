#include "ft_printf.h"
void print_u(int nbr)
{
    unsigned int u_nbr;

    u_nbr = nbr;
    print_d(u_nbr);
}