/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:06:10 by mtacunan          #+#    #+#             */
/*   Updated: 2021/10/21 18:08:52 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
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
		return (0);
	while (++i < len_1)
		sol[i] = s1[i];
	while (i < len_1 + len_2)
	{
		sol[i] = *s2;
		s2++;
		i++;
	}
	sol[i] = '\0';
	return (sol);
}
