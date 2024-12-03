/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mez-zahi <mez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:03:52 by mez-zahi          #+#    #+#             */
/*   Updated: 2024/11/30 15:03:54 by mez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *str)
{
	int	count;
	int	i;

	count = 0;
	i = -1;
	if (!str)
		return (count += write(1, "(null)", 6));
	while (str[++i])
		count += ft_print_char(str[i]);
	return (count);
}
