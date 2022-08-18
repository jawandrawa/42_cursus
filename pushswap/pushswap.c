/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:48:08 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/18 14:13:06 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_stack	*create_stacka(char **data)
{
	t_stack	*a;
	t_node	*aux;
	int		i;

	a = ft_calloc(sizeof(t_stack), 1);
//proteger amalloc
	//*a = malloc(sizeof(t_node) * 2);
	*a = NULL;
	i = 0;
	while (data[i])
	{
		aux = ft_lstnew((int)ft_atoi(data[i]), 0);
		ft_lstadd_back(a, aux);
		i++;
	}
	return (a);
}

t_stack	*create_stackb(void)
{
	t_stack	*sol;
	sol = ft_calloc(sizeof(t_stack),1);
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
	printf("content: %d | id: %d\n", node->content, node->id);
	while(node->next)
	{
		node = node->next;
		printf("content: %d | id: %d\n", node->content, node->id);
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
		printf("tamaño stck_a : %d\n", nums);
		put_id(stack_a, nums);
		//------
		printf("sorted : %d\n", sorted(stack_a));
		if (nums == 1)
			return(0);
		else if(nums == 2)
		{
			if ((*stack_a)->id == 1)
				return(0);
			else
			{	
				sa(stack_a);
				return(0);
			}
		}
		else
			div_stack(stack_a, stack_b, nums/2, nums);
		/*para visualizar los stacks , quitar despues
		printf("<<<stack a>>>\n");
		print_stack(*stack_a);
		printf( "-----\n");
		printf("<<<stack b>>>\n");
		print_stack(*stack_b);*/
	}
	//system("leaks push_swap");
	return (0);
}
