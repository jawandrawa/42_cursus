/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:13:04 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/10 16:52:13 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

//anotaciones: al crear las listas
//se le puede poner un identificador,
// valorar ventajas y desventajjas
void	m_swap(t_stack *lst)
{
	int	aux;
	if (ft_lstsize(*lst) > 1)
	{
		aux = (*lst)->content;
		(*lst)->content = (*lst)->next->content;
		(*lst)->next->content = aux;
	}
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	if (ft_lstsize(*stack_a) > 1)
	{
		m_swap(stack_a);
		m_swap(stack_b
	);
	}
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*aux;

	aux = ft_lstnew((*stack_a)->content);
	ft_lstadd_front(stack_b, aux);
	*stack_a = (*stack_a)->next;
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*aux;

	aux = ft_lstnew((*stack_b)->content);
	ft_lstadd_front(stack_a, aux);
	*stack_b = (*stack_b)->next;
}

/*
void	rr(void)
{
	
}
*/