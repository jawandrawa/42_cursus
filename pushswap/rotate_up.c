/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:05:47 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/16 12:23:46 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
/*desplaza hacia arriba todos los elementos del stack a una posición,
de forma que el primer elemento se convierte en el último.*/
void	rra(t_stack *stack_a)
{
	t_node	*aux;
	t_node	*last;
	int		size;

	size = ft_lstsize(*stack_a);
	last = ft_lstlast(*stack_a);
	last->next = *stack_a;
	aux = *stack_a;
	while(size > 2)
	{	
		aux = aux->next;
		size--;
	}
	aux->next = NULL;
	*stack_a = last;
}

void	rrb(t_stack *stack_b)
{
	t_node	*aux;
	t_node	*last;
	int		size;

	size = ft_lstsize(*stack_b);
	last = ft_lstlast(*stack_b);
	last->next = *stack_b;
	aux = *stack_b;
	while(size > 2)
	{	
		aux = aux->next;
		size--;
	}
	aux->next = NULL;
	*stack_b = last;
}
