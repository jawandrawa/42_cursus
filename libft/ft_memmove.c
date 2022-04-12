/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:19:49 by mtacunan          #+#    #+#             */
/*   Updated: 2021/10/16 13:02:28 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	cnt;
	char	*srcc;
	char	*destc;

	cnt = -1;
	srcc = (char *)src;
	destc = dest;
	if (src == dest)
		return (dest);
	else if (src < dest)
	{
		while (n--)
			destc[n] = srcc[n];
	}
	else
	{
		while (++cnt < n)
			destc[cnt] = srcc[cnt];
	}
	return (dest);
}
/*void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_cpy;
	unsigned char	*src_cpy;

	if (dst < src)
	{
		dst_cpy = dst;
		src_cpy = (unsigned char *)src;
		while (src_cpy <= (unsigned char *)src + len)
		{
			*dst_cpy = *src_cpy;
			dst_cpy++;
			src_cpy++;
		}
		return (dst);
	}
	if (src < dst)
	{
		dst_cpy = dst + len;
		src_cpy = (unsigned char *)src + len;
		while ((unsigned char *)src <= src_cpy + len)
		{
			*dst_cpy = *src_cpy;
			dst_cpy--;
			src_cpy--;
		}
		return (dst);
	}
	else
		return ((void *)src);
}
*/