/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:48:08 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/03 21:46:28 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*create_stacka(char **data)
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

t_list	*create_stackb(int size)
{
	t_list	*first;
	t_list	*aux;
	
	first = ft_lstnew(0);
	while (--size > 0)
	{
		aux = ft_lstnew(0);
		ft_lstadd_back(&first, aux);
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

void	print_lst(t_list *lst)
{
	printf("%d\n", lst->content);
	while(lst->next)
	{
		lst = lst->next;
		printf("%d\n", lst->content);
	}
}

int	main(int argc, char **argv)
{
	char	**nums;
	t_list	*stack_a;
	t_list	*stack_b;
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
		stack_a = create_stacka(nums);
		size = ft_lstsize(stack_a);
		m_swap(stack_a);
		stack_b = create_stackb(size);
		print_lst(stack_a);
		printf("tamaño stck_a : %d stck_b : %d\n", size, ft_lstsize(stack_b));
		print_lst(stack_b);
		/*se prendio, ahora toca el algoritmo*/
	}
	//system("leaks push_swap");
	return (0);
}
