/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:12:06 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/14 13:20:35 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		len_1;
	int		len_2;
	int		i;
	char	*sol;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	sol = malloc((len_1 + len_2 + 1) * sizeof(char));
	if (!sol)
		return (NULL);
	while (++i < len_1)
		sol[i] = s1[i];
	while (i < len_1 + len_2)
	{
		sol[i] = *s2;
		s2++;
		i++;
	}
	sol[i] = '\0';
	free (s1);
	return (sol);
}

