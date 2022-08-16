/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:48:08 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/16 16:39:14 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_stack	*create_stacka(char **data)
{
	t_stack	*a;
	t_node	*aux;
	int		i;

	a = malloc(sizeof(t_stack));
//proteger amalloc
	//*a = malloc(sizeof(t_node) * 2);
	*a = NULL;
	i = 0;
	while (data[i])
	{
		aux = ft_lstnew((int)ft_atoi(data[i]));
		ft_lstadd_back(a, aux);
		i++;
	}
	return (a);
}

t_stack	*create_stackb(void)
{
	t_stack	*sol;
	sol = malloc(sizeof(t_stack));
	*sol = NULL;
	return (sol);
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

void	print_stack(t_node *node)
{
	if(!node)
		return;
	printf("%d\n", node->content);
	while(node->next)
	{
		node = node->next;
		printf("%d\n", node->content);
	}
}

int	main(int argc, char **argv)
{
	char	**data;
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		nums;
	
	if (argc == 1)
	{
		printf("ingrese valores por favor\n");
		return(0);
	}
	data = starter(argc, argv);
	if (!check_elements(data) || !check_reps(data) || !*data)
	{
		free_elements(data);
		write(2,"Ingrese números integers sin repeticiones.\n",44);
		return(0);
	}
	else
	{
		stack_a = create_stacka(data);
		stack_b = create_stackb();
		nums = ft_lstsize(*stack_a);
		print_stack(*stack_a);
		// printf("tamaño stck_a : %d\n", ft_lstsize(*stack_a));
		// print_stack(*stack_b);
		/*se prendio, ahora toca el algoritmo*/
		put_id(stack_a);
		print_stack(*stack_a);
	}
	//system("leaks push_swap");
	return (0);
}
