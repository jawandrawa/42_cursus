/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:04:22 by mtacunan          #+#    #+#             */
/*   Updated: 2021/11/13 15:09:34 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static int	get_len(unsigned long num, int len)
{
	if (num < 0)
	{
		len++;
		get_len(-num, len);
	}
	while (num / 16)
	{
		num = num / 16;
		len++;
	}
	len++;
	return (len);
}

int	ft_put_address(unsigned long n, char *base)
{
	int	len;

	len = get_len(n, 0);
	if (n >= 16)
	{
		ft_put_address(n / 16, "0123456789abcdef");
		ft_putchar(base[n % 16]);
	}
	else
		ft_putchar(base[n % 16]);
	return (len + 2);
}
