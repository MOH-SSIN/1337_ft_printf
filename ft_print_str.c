#include "ft_printf.h"

int ft_print_str(const char *str)
{
    int i;
    int count;

    count = 0;
    i = -1;
    if (!str)
        return (count += write(1, "(null)", 6));
    while (str[++i])
        count += ft_print_char(str[i]);
    return (count);
}