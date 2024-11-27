#include "ft_printf.h"


int ft_print_int(int nbr)
{
    return (ft_print_digit(nbr, 10, 'd'));
}
