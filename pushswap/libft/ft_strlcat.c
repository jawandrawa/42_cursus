/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:08:07 by mtacunan          #+#    #+#             */
/*   Updated: 2021/10/02 19:08:08 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;
	size_t	dest_size;

	dest_size = ft_strlen(dest);
	i = 0;
	src_size = ft_strlen(src);
	if (size < dest_size)
		return (size + src_size);
	else
	{
		while (dest_size + i + 1 < size && src[i])
		{
			dest[dest_size + i] = src[i];
			i++;
		}
		dest[i + dest_size] = '\0';
	}
	return (dest_size + src_size);
}
