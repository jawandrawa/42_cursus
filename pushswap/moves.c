/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:13:04 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/16 14:54:52 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

//anotaciones: al crear las listas
//se le puede poner un identificador,
// valorar ventajas y desventajjas
void	sa(t_stack *lst)
{
	int	aux;
	if (ft_lstsize(*lst) > 1)
	{
		aux = (*lst)->content;
		(*lst)->content = (*lst)->next->content;
		(*lst)->next->content = aux;
	}
}

void	sb(t_stack *lst)
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
		sa(stack_a);
		sb(stack_b);
	}
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*aux;
	t_node	*nstack;
	
	aux = ft_lstnew((*stack_a)->content);
	ft_lstadd_front(stack_b, aux);
	nstack = (*stack_a)->next;
	free(*stack_a);
	*stack_a = nstack;
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*aux;
	t_node	*nstack;
	
	aux = ft_lstnew((*stack_b)->content);
	ft_lstadd_front(stack_a, aux);
	nstack = (*stack_b)->next;
	free(*stack_b);
	*stack_b = nstack;
}
