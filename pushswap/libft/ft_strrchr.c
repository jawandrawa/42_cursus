/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:03:38 by mtacunan          #+#    #+#             */
/*   Updated: 2021/10/19 13:25:13 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
char	*ft_strrchr(const char	*str, int c)
{
	int		i;
	char	*sol;

	sol = NULL;
	i = 0;
	while (*str)
	{
		if (*str == (unsigned char)c)
			sol = (char *)str;
		str++;
	}
	if (!*str && !(unsigned char)c)
	{
		sol = (char *)str;
		return (sol);
	}
	return (sol);
}
