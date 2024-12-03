/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mez-zahi <mez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:11:14 by mez-zahi          #+#    #+#             */
/*   Updated: 2024/11/30 15:04:12 by mez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_print_str(const char *str);
int		ft_print_char(char c);
int		ft_print_digit(long nbr, int base, char c);
int		ft_print_int(int nbr);
int		ft_print_unsigned(unsigned int nbr);
int		ft_print_pointer(void *ptr);

#endif
