/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:13:04 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/25 22:31:21 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	sa(t_stack *lst)
{
	t_node	*aux;

	if (ft_lstsize(*lst) > 1)
	{
		aux = (*lst)->next;
		(*lst)->next = aux->next;
		aux->next = *lst;
		*lst = aux;
	}
	write(1, "sa\n", 3);
}

void	sb(t_stack *lst)
{
	t_node	*aux;

	if (ft_lstsize(*lst) > 1)
	{
		aux = (*lst)->next;
		(*lst)->next = aux->next;
		aux->next = *lst;
		*lst = aux;
	}
	write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	if (ft_lstsize(*stack_a) > 1)
	{
		sa(stack_a);
		sb(stack_b);
	}
	write(1, "ss\n", 3);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*aux1;

	aux1 = *stack_b;
	*stack_b = (*stack_b)->next;
	aux1->next = *stack_a;
	*stack_a = aux1;
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*aux;

	aux = *stack_a;
	*stack_a = (*stack_a)->next;
	aux->next = *stack_b;
	*stack_b = aux;
	write(1, "pb\n", 3);
}
