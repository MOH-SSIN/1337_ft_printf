#include "ft_printf.h"

int ft_print_digit(long nbr, int base, char c)
{
    int     len;
    char    *tab;

    len = 0;
    if (c == 'x')
        tab = "0123456789abcdef";
    else
        tab = "0123456789ABCDEF";
    if (nbr < 0)
    {
        len += ft_print_char('-');
        nbr = -nbr;
    }
    if (nbr >= base)
        len += ft_print_digit(nbr / base, base, c);
    len += ft_print_char(tab[nbr % base]);
    return (len);
}
