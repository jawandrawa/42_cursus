/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:44:47 by mtacunan          #+#    #+#             */
/*   Updated: 2021/12/05 14:32:31 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	char	*sol;

	sol = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
		{
			sol = (char *)str;
			return (sol);
		}
		str++;
	}
	if (!*str && !(unsigned char)c)
	{
		sol = (char *)str;
		return (sol);
	}
	return (sol);
}
