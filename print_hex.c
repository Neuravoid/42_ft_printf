#include "ft_printf.h"

char *print_hex(unsigned long nbr,int len,char type)
{
    int r;
    char *hexadecimal = (char *)malloc(len + 3);
        if (!hexadecimal)
            return NULL;

        hexadecimal[len + 2] = '\0';

        while (len > 0) {
            r = nbr % 16;
            if(type == 'L')
                hexadecimal[--len + 2] = HEX_LOW_BASE[r];
            else
                hexadecimal[--len + 2] = HEX_UP_BASE[r]; 
            nbr /= 16;
        }
        hexadecimal[0] = '0';
        hexadecimal[1] = 'x';

        return(hexadecimal);
}