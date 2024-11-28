/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mez-zahi <mez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:11:12 by mez-zahi          #+#    #+#             */
/*   Updated: 2024/11/27 18:26:52 by mez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char c, va_list *ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_print_char(va_arg(*ap, int));
	else if (c == 's')
		count += ft_print_str(va_arg(*ap, char *));
	else if (c == 'p')
		count += ft_print_pointer(va_arg(*ap, void *));
	else if (c == 'd')
		count += ft_print_digit((long)(va_arg(*ap, int)), 10, c);
	else if (c == 'i')
		count += ft_print_int(va_arg(*ap, int));
	else if (c == 'u')
		count += ft_print_unsigned(va_arg(*ap, unsigned int));
	else if (c == 'x')
		count += ft_print_digit((long)(va_arg(*ap, unsigned int)), 16, c);
	else if (c == 'X')
		count += ft_print_digit((long)(va_arg(*ap, unsigned int)), 16, c);
	else if (c == '%')
		count += ft_print_char('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	ap;

	va_start(ap, str);
	len = 0;
	while (*str)
	{
		if (*str == '%' && !*(str + 1))
			break ;
		if (*str == '%' && *(str + 1))
			len += ft_format(*(++str), &ap);
		else
			len += ft_print_char(*str);
		str++;
	}
	va_end(ap);
	return (len);
}
