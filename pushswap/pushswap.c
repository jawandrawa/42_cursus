/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:48:08 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/23 19:24:12 by mtacunan         ###   ########.fr       */
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
	//free (data);
	// while (*nums)
	// {
	// 	printf ("%s\n", *nums);
	// 	nums++;
	// }
	
	if (!check_elements(nums))
	{
		//free(nums);
		
		write(2,"Solo se admiten números y sin repeticiones.\n",45);
		//jajalolxd lo de repetir ahora lo vemos
	}
	else
		printf("stack valido\n");
	
	//system("leaks a.out");
	return (0);
	/*check 
	->mal: liberar y sacar msj error
	->bien: ordenar
	*/

	/*algoritmo ordenacion*/
	
}
