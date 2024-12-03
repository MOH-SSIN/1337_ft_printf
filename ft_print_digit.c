/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mez-zahi <mez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:03:25 by mez-zahi          #+#    #+#             */
/*   Updated: 2024/11/30 15:03:29 by mez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(long nbr, int base, char c)
{
	int		len;
	char	*tab;

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
