/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:05:33 by mtacunan          #+#    #+#             */
/*   Updated: 2021/10/23 15:14:27 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*address;
	int		i;

	i = 0;
	address = malloc ((ft_strlen(s1) + 1) * sizeof(char));
	if (! address)
		return (NULL);
	while (*s1)
	{
		address[i] = *s1;
		s1++;
		i++;
	}
	address[i] = '\0';
	return (address);
}
