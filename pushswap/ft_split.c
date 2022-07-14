/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:15:33 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/14 13:20:20 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	get_words(const char *s, char c)
{
	int	i;
	int	count;
	int	separador;

	i = 0;
	count = 0;
	separador = 1;
	while (s[i])
	{
		if (s[i] != c && separador == 1)
		{
			count++;
			separador = 0;
		}
		else if (s[i] == c)
			separador = 1;
		i++;
	}
	return (count);
}

static char	*put_word(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static void	free_my_split(char **sol, int j)
{
	while (j >= 0)
	{
		free (sol[j]);
		j--;
	}
	free (sol);
}

static char	**solve_splt(char **sol, const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		start_word;

	i = 0;
	j = 0;
	start_word = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start_word < 0)
			start_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start_word >= 0)
		{
			sol[j++] = put_word(s, start_word, i);
			if (!sol[j - 1])
			{
				free_my_split(sol, j - 1);
				return (NULL);
			}
			start_word = -1;
		}
		i++;
	}
	sol[j] = NULL;
	return (sol);
}

char	**ft_split(char const *s, char c)
{
	char	**sol;

	if (!s)
		return (NULL);
	sol = malloc((get_words(s, c) + 1) * sizeof(char *));
	if (!sol)
		return (0);
	sol = solve_splt(sol, s, c);
	return (sol);
}

int main ()
{
	int i = 0;
	const char **a = ft_split("hola", ' ');
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
	i = 0;
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	free (a);
	system("leaks a.out");
}

