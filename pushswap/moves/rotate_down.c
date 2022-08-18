/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_down.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:23:21 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/18 14:19:03 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ra(t_stack *stack_a)
{
	t_node	*aux;
	t_node	*sol;

	aux = ft_lstnew((*stack_a)->content, (*stack_a)->id);
	ft_lstadd_back(stack_a, aux);
	sol = (*stack_a)->next;
	free(*stack_a);
	*stack_a = sol;
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack_b)
{
	t_node	*aux;
	t_node	*sol;

	aux = ft_lstnew((*stack_b)->content, (*stack_b)->id);
	ft_lstadd_back(stack_b, aux);
	sol = (*stack_b)->next;
	free(*stack_b);
	*stack_b = sol;
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write(1, "rr\n", 3);
}
