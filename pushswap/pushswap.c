/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:48:08 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/02 15:21:01 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*create_stack(char **data)
{
	t_list	*first;
	t_list	*aux;
	int		i;

	first = ft_lstnew(ft_atoi(data[0]));
	i = 1;
	while (data[i])
	{
		aux = ft_lstnew((int)ft_atoi(data[i]));
		ft_lstadd_back(&first, aux);
		i++;
	}
	return (first);
}

void	free_elements(char **array)
{	
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	main(int argc, char **argv)
{
	char	**nums;
	t_list	*lst_nums;
	int		size;
	if (argc == 1)
	{
		printf("ingrese valores por favor\n");
		return(0);
	}
	nums = starter(argc, argv);
	if (!check_elements(nums) || !check_reps(nums) || !*nums)
	{
		free_elements(nums);
		write(2,"Ingrese números integers sin repeticiones.\n",44);
		return(0);
	}
	else
	{
		lst_nums = create_stack(nums);
		size = ft_lstsize(lst_nums);
		/*se prendio, ahora toca el algoritmo*/
	}
	system("leaks push_swap");
	return (0);
}
/*anotaciones*/

/*

cuando argv ==
*/