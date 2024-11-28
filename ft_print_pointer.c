#include "ft_printf.h"

static int	ft_print_aid(const unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr >= 16)
	{
		len += ft_print_aid(nbr / 16);
		len += ft_print_aid(nbr % 16);
	}
	else if (nbr / 10 == 0)
		len += ft_print_char(nbr + '0');
	else
		len += ft_print_char((char)nbr - 10 + 'a');
	return (len);
}

int	ft_print_pointer(void *ptr)
{
	ft_print_str("0x");
	if (!ptr)
		return (ft_print_char('0') + 2);
	return (ft_print_aid((unsigned long)ptr) + 2);
}
