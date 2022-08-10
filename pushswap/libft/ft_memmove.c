/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:19:49 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/09 12:53:49 by mtacunan         ###   ########.fr       */
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
