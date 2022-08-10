/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:05:47 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/10 17:15:35 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
/*desplaza hacia arriba todos los elementos del stack a una posición,
de forma que el primer elemento se convierte en el último.*/
void	ra(t_stack *stack_a)
{
	t_node	*aux;

	aux = ft_lstlast(*stack_a);
	printf("%d\n", aux->content);
	aux->next = *stack_a;
	*stack_a = aux;
}

void	rb(t_stack *stack_b)
{
	t_node	*aux;

	aux = ft_lstlast(*stack_b);
	printf("%d\n", aux->content);
	aux->next = *stack_b;
	*stack_b = aux;
}

void	rra(t_stack *stack_a)
{
	ra(stack_a);
	ra(stack_a);
}

void	rrb(void)
{
	
}

void	rrr(void)
{
	
}

