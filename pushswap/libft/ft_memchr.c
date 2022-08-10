/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:04:10 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/09 13:03:05 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cpy;
	size_t			i;

	s_cpy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*s_cpy == (unsigned char)c)
		{
			return (s_cpy);
		}
		s_cpy++;
		i++;
	}
	return (NULL);
}
