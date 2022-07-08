/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:13:30 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/08 17:45:28 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	get_len(int num, int len)
{
	if (num < 0)
	{
		len++;
		get_len(-num, len);
	}
	while (num / 10)
	{
		num = num / 10;
		len++;
	}
	len++;
	return (len);
}

static int	ft_pow(int base, int exp)
{
	int	ft_pow;

	ft_pow = 1;
	while (exp > 0)
	{
		ft_pow = ft_pow * base;
		exp--;
	}
	return (ft_pow);
}

static char	*put_num(int num, char	*str_nb, int len, int pot)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		pot--;
		str_nb[i] = '-';
		num = -num;
		i++;
	}
	while (i < len)
	{
		str_nb[i] = num / ft_pow(10, pot) + '0';
		num = num % ft_pow(10, pot);
		pot--;
		i++;
	}
	str_nb[len] = '\0';
	return (str_nb);
}

char	*ft_itoa(int num)
{
	char	*str_nb;
	int		i;
	int		pot;
	int		len;

	len = get_len(num, 0);
	pot = len - 1;
	i = 0;
	str_nb = malloc(get_len(num, 1) * sizeof(char));
	if (!str_nb)
		return (NULL);
	else
		return (put_num(num, str_nb, len, pot));
}
