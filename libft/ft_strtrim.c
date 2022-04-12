/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:12:19 by mtacunan          #+#    #+#             */
/*   Updated: 2021/10/23 17:05:59 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*fill(char const *s1, char *sol, int start, int end)
{
	size_t	i;

	i = 0;
	while (start < end)
	{
		sol[i] = s1[start];
		start++;
		i++;
	}
	sol [i] = '\0';
	return (sol);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*sol;

	if (!s1)
		return (NULL);
	if (!*set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (is_set(s1[start], set) && s1[start])
		start++;
	while (is_set(s1[end - 1], set) && start < end)
		end--;
	sol = malloc((end - start + 1) * sizeof(char));
	if (!sol)
		return (NULL);
	sol = fill(s1, sol, start, end);
	return (sol);
}
