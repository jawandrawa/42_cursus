/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:54:18 by mtacunan          #+#    #+#             */
/*   Updated: 2022/02/09 13:28:41 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	choose_type(const char *str, va_list ap)
{	
	if (*str == '%')
		return (ft_putchar('%'));
	if (*str == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (*str == 'd' || *str == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	if (*str == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (*str == 'u')
		return (ft_putnbr_u(va_arg(ap, unsigned int)));
	if (*str == 'p')
	{
		write(1, "0x", 2);
		return (ft_put_address(va_arg(ap, unsigned long), "0123456789abcdef"));
	}
	if (*str == 'X')
		return (ft_hex_caps(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	if (*str == 'x')
		return (ft_hex_min(va_arg(ap, unsigned int), "0123456789abcdef"));
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

int main ()
{
	char	*test = "hola buenas tardes";
	ft_printf("%s",test);
}