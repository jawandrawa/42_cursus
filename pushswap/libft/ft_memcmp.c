/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:04:28 by mtacunan          #+#    #+#             */
/*   Updated: 2021/10/06 13:00:28 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_cpy;
	const unsigned char	*s2_cpy;
	size_t				i;

	s1_cpy = s1;
	s2_cpy = s2;
	i = 0;
	while (i < n)
	{
		if (s1_cpy[i] != s2_cpy[i])
			return ((unsigned char)s1_cpy[i] - (unsigned char)s2_cpy[i]);
		i++;
	}
	return (0);
}
