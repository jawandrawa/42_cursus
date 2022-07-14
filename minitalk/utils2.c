/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:45:32 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/14 15:03:29 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_isdigit(int c)
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

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
	return (s);
}

void	*ft_calloc(size_t num, size_t size)
{
	void	*sol;

	sol = malloc (num * size);
	if (! sol)
		return (NULL);
	ft_bzero(sol, size * num);
	return (sol);
}
