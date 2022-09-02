/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:42:54 by mtacunan          #+#    #+#             */
/*   Updated: 2022/09/02 21:35:13 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
/*0 : ra 1 : rra*/

int	find_node (t_stack *s, int nb)
{
	t_node	*aux;
	int		pos;

	pos = 0;
	aux = *s;
	while (aux)
	{
		if (aux->id == nb)
			return (pos);
		pos++;
		aux = aux->next;
	}
	return (pos);
}

/*
 * Busca el el siguient elemento para pushear al stack_a
 * Es el último paso
*/

void	get_next(t_stack *a, t_stack *b)
{
	int	next;
	int	nums;

	next = (*a)->id - 1;
	nums = ft_lstsize(*b);
	while (nums)
	{
		if ((*b)->id == next || ft_lstsize(*b) == 1)
		{
			pa(a, b);
			next = (*a)->id - 1;
		}
		else if (find_node(b, next) <= (ft_lstsize(*b) / 2))
		{
			rb(b);
		}
		else
			rrb(b);
		nums = ft_lstsize(*b);
	}
}
