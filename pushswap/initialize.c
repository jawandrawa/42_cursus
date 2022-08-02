/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:36:01 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/02 15:10:32 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

char	*add_sp(char *str)
{
	char	*res;
	
	res = ft_strdup(str);
	res = ft_strjoin(res," ");
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
			if ( (!ft_isdigit(stack[j][i]) && stack[j][i] != '-' )
				|| (stack[j][i] == '-' && !ft_isdigit(stack[j][i + 1])))
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}
/*falta lo de los limites de los integer*/
int	check_reps(char	**nums)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (nums[i])
	{
		aux = ft_atoi(nums[i]);
		j = i + 1;
		while(nums[j])
		{
			if (aux == ft_atoi(nums[j]) || aux < -2147483648 || aux > 2147483647)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

char	**starter(int argc, char** argv)
{
	int		i;
	char	*aux;
	char	**sol;
	char	*data;
	
	i = 1;
	data = ft_strdup("");
	while (i < argc)
	{
		aux = add_sp(argv[i]);
		data = ft_strjoin(data,aux);
		free(aux);
		i++;
	}
	sol = ft_split(data, ' ');
	free(data);
	return(sol);
}
