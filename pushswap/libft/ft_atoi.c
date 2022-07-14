/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:04:55 by mtacunan          #+#    #+#             */
/*   Updated: 2021/10/18 12:41:40 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char	*str, int i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
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
