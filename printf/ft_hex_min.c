/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:54:22 by mtacunan          #+#    #+#             */
/*   Updated: 2021/11/13 15:38:10 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_len(unsigned int num, int len)
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

int	ft_hex_min(unsigned int n, char *hex_base)
{
	if (n >= 16)
	{
		ft_hex_min(n / 16, "0123456789abcdef");
		ft_putchar(hex_base[n % 16]);
	}
	else
		ft_putchar(hex_base[n % 16]);
	return (get_len(n, 0));
}
