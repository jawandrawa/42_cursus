/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:03:22 by mtacunan          #+#    #+#             */
/*   Updated: 2021/10/06 12:00:13 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_cpy;
	const unsigned char	*src_cpy;

	if (!dst && !src)
		return (NULL);
	dst_cpy = dst;
	src_cpy = (unsigned char *)src;
	while (n > 0)
	{
		*dst_cpy = *src_cpy;
		dst_cpy++;
		src_cpy++;
		n--;
	}
	return (dst);
}
