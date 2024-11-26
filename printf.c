#include "ft_printf.h"

static void print_arg(char type , va_list *args)
{
    if(type == 'c')
        print_c(va_arg(*args,int));
    else if(type == 'd' || type == 'i')
        print_d(va_arg(*args,int));
    else if(type == 's')
        print_s(va_arg(*args,char *));
    else if(type == 'p')
        print_p(va_arg(*args,void *));
    else if(type == 'u')
        print_u(va_arg(*args,int));
    else if(type == 'x')
        print_x(va_arg(*args,int));
    else if(type == 'X')
        print_X(va_arg(*args,int));
    else if (type == '%')
    {
        char percent = '%';
        write(1, &percent, 1);
    }
}
int ft_printf(const char *f, ...) 
{
    va_list arglist;
    va_start(arglist, f);

    while (*f) {
        if (*f == '%') {
            f++; // '%' sonrası kontrol
            print_arg(*f, &arglist); // Tek bir fonksiyonla yazdırma
        } else {
            write(1, f, 1); // Normal karakterleri yazdır
        }
        f++;
    }

    va_end(arglist);
    return 1;
}