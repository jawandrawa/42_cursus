/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:48:08 by mtacunan          #+#    #+#             */
/*   Updated: 2022/09/02 21:34:31 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_stack	*create_stacka(int argc, char **argv)
{
	t_stack	*a;
	t_node	*aux;
	int		i;
	char	**data;

	data = get_data(argc, argv);
	a = ft_calloc(sizeof(t_stack), 1);
	if (!a)
		exit(0);
	*a = NULL;
	i = 0;
	while (data[i])
	{
		aux = ft_lstnew((int)ft_atoi(data[i]), 0);
		ft_lstadd_back(a, aux);
		i++;
	}
	free_elements(data);
	put_id(a, ft_lstsize(*a));
	return (a);
}

t_stack	*create_stackb(void)
{
	t_stack	*sol;

	sol = ft_calloc(sizeof(t_stack), 1);
	*sol = NULL;
	return (sol);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc == 1)
		return (-1);
	if (!check_all(argc, argv))
	{
		printf("awa\n");
		return (0);
	}
	stack_a = create_stacka(argc, argv);
	stack_b = create_stackb();
	if (ft_lstsize(*stack_a) == 1)
		return (0);
	else if (ft_lstsize(*stack_a) == 2)
		sort2(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort3(stack_a);
	else if (ft_lstsize(*stack_a) < 101)
		sort100(stack_a, stack_b);
	else
		sort500(stack_a, stack_b);
	return (0);
}
