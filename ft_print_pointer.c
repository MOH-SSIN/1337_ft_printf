#include "ft_printf.h"

static int	printadress(const unsigned long nbr)
{
    int len;

    len = 0;
	if (nbr >= 16)
    {
        len += printadress(nbr / 16);
        len +=  printadress(nbr % 16);
    }
	else if (nbr / 10 == 0)
		len += ft_print_char(nbr + '0');
	else
		len += ft_print_char((char) nbr - 10 + 'a');
	return (len);
}

int	ft_print_pointer(void *adress)
{
	ft_print_str("0x");
	if (!adress)
		return (ft_print_char(48));
	return (2 + printadress((unsigned long) adress));
}