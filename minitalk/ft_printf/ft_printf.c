/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:54:18 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/08 12:59:38 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	choose_type(const char *str, va_list ap)
{	
	if (*str == '%')
		return (ft_putchar('%'));
	if (*str == 'd' || *str == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		c_bytes;

	c_bytes = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str != '%')
		{
			write (1, str, 1);
			c_bytes++;
		}
		else if (*str == '%')
		{
			str++;
			c_bytes += choose_type(str, args);
			va_end(args);
		}
		str++;
	}
	return (c_bytes);
}
