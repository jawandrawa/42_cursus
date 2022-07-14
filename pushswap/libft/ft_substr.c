/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:05:58 by mtacunan          #+#    #+#             */
/*   Updated: 2021/10/18 12:45:15 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sol;
	unsigned int	i;
	unsigned int	lim;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	lim = ft_strlen(&s[start]);
	if (len > lim)
		len = lim;
	sol = malloc ((int)len + 1 * sizeof(char));
	if (!sol)
		return (NULL);
	while (i < (unsigned int)len && s[start] != '\0')
	{
		sol[i] = s[start];
		i++;
		start++;
	}
	sol[i] = '\0';
	return (sol);
}
