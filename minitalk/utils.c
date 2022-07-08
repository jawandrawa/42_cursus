/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:13:30 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/08 15:22:25 by mtacunan         ###   ########.fr       */
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

static int	ft_isdigit(int c)
{
	if (! (c >= '0' && c <= '9'))
		return (0);
	return (1);
}

static int	ft_isspace(const char	*str, int i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int					i;
	unsigned long long	num;
	int					sign;

	sign = 1;
	num = 0;
	i = ft_isspace(str, 0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	if (sign == -1 && num > LONG_MAX)
		return (0);
	if (sign == 1 && num > LONG_MAX)
		return (-1);
	return (num * sign);
}
