/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithym.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:25:45 by mtacunan          #+#    #+#             */
/*   Updated: 2022/09/19 16:06:42 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/*
 *	Divide el stack a pasando la mitad hacia b. 
 * 	Recibe como arametros la media del stack a.
*/

void	div_stack(t_stack *a, t_stack *b, int media, int size)
{
	int	pushed;
	int	i;

	i = 0;
	pushed = ft_lstsize(*a) / 2 + size;
	while (pushed)
	{	
		if ((*a)->id <= media)
		{
			pb(a, b);
			pushed--;
		}
		else
			ra(a);
	}
}

int	get_media(t_stack *s)
{
	t_node	*aux;
	int		res;

	res = 0;
	aux = *s;
	while (aux)
	{
		res += aux->id;
		aux = aux->next;
	}
	res /= ft_lstsize(*s);
	return (res);
}

void	sort(t_stack *a, t_stack *b)
{
	int	nums;

	nums = ft_lstsize(*a);
	while (nums > 3)
	{
		div_stack(a, b, get_media(a), ft_lstsize(*a) % 2);
		nums = ft_lstsize(*a);
	}
	if (nums == 2)
		sort2(a);
	if (nums == 3)
		sort3(a);
	get_next(a, b);
}
