/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithym_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:15:03 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/18 10:18:42 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	find_node(t_stack *stack, int nb, int id)
{
	t_node	*aux;

	aux = *stack;
	while (aux)
	{
		if(aux->content == nb)
			aux->id = id;
		aux = aux->next;
	}
}

int	get_min(t_stack *stack_a)
{
	int 	res;
	t_node	*aux;
	
	res = 2147483647;
	aux = *stack_a;
	while (aux)
	{
		if(aux->id == 0 && aux->content < res)
			res = aux->content;
		aux = aux->next;	
	}
	return (res);
}

void	put_id(t_stack *stack_a, int nums)
{
	int	min;
	int	id;
	
	id = 1;
	min = get_min(stack_a);
	while (nums > 0)
	{
		find_node(stack_a, min, id);
		min = get_min(stack_a);
		id++;
		nums--;
	}
}
