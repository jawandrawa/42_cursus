/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:48:08 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/27 18:10:38 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

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
		printf("%d\n",aux);
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

char	*add_sp(char *str)
{
	char	*res;
	
	res = ft_strdup(str);
	res = ft_strjoin(res," ");
	return (res);
}

int	main(int argc, char **argv)
{
	//--initilize--//
	int		i;
	char	*aux;
	char	*data;
	char	**nums;
	i = 1;
	data = ft_strdup("");
	while (i < argc)
	{
		aux = add_sp(argv[i]);
		data = ft_strjoin(data,aux);
		free(aux);
		i++;
	}
	nums = ft_split(data, ' ');
	if (!check_elements(nums) || !check_reps(nums))
	{
		free(nums);
		write(2,"Ingrese números integers sin repeticiones.\n",44);
	}
	//---fin intialize---//
	else
		printf("stack valido\n");
	// while(*nums)
	// {
	// 	printf("·%s·\n", *nums);
	// 	nums++;
	// }
	
	//system("leaks push_swap");
	return (0);
	/*check 
	->mal: liberar y sacar msj error
	->bien: ordenar
	*/

	/*algoritmo ordenacion*/
	
}