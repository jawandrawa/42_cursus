/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:36:01 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/29 17:40:19 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

char	*add_sp(char *str)
{
	char	*res;

	res = ft_strdup(str);
	res = ft_strjoin(res, " ");
	return (res);
}

int	check_elements(char **stack)
{
	int	i;
	int	j;

	j = 0;
	while (stack[j])
	{
		i = 0;
		while (stack[j][i])
		{
			if ((!ft_isdigit(stack[j][i]) && stack[j][i] != '-' && stack[j][i] != '+')
				|| (stack[j][i] == '-' && !ft_isdigit(stack[j][i + 1]))
				|| (stack[j][i] == '+' && !ft_isdigit(stack[j][i + 1])))
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

int	check_reps(char	**nums)
{
	int	i;
	int	j;
	int	aux;
	//falta lo de los limites de los integer
	i = 0;
	while (nums[i])
	{
		aux = ft_atoi(nums[i]);
		j = i + 1;
		while (nums[j])
		{
			if (aux == ft_atoi(nums[j])
				|| aux < -2147483648 || aux > 2147483647)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	**get_data(int argc, char **argv)
{
	int		i;
	char	*aux;
	char	**sol;
	char	*data;

	i = 1;
	data = ft_strdup("");
	if (argc == 1)
		return (NULL);
	while (i < argc)
	{
		aux = add_sp(argv[i]);
		data = ft_strjoin(data, aux);
		free(aux);
		i++;
	}
	sol = ft_split(data, ' ');
	free(data);
	return (sol);
}

int	check_all(int argc, char **argv)
{
	char	**data;

	data = get_data(argc, argv);
	if (!check_elements(data) || !check_reps(data) || !*data)
		return (0);
	free_elements(data);
	return (1);
}
