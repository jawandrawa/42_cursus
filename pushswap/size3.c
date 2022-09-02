/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:40:31 by mtacunan          #+#    #+#             */
/*   Updated: 2022/09/02 19:34:19 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/*
* Calcula el minimo del stack s, sin fijarse en los id,
* como hace el get_min.
*/

int	gmin(t_stack *s)
{
	int		res;
	t_node	*aux;

	res = 2147483647;
	aux = *s;
	while (aux)
	{
		if (aux->id < res)
			res = aux->id;
		aux = aux->next;
	}
	return (res);
}

/*
* Observa los posibles casos con tres elementos
*/

void	sort3(t_stack *s)
{
	int	aux;

	aux = gmin(s);
	if (!sorted(s))
	{
		if ((*s)->id % aux == 0 && (*s)->next->id % aux == 2)
		{
			sa(s);
			ra(s);
		}
		else if ((*s)->id % aux == 1 && (*s)->next->id % aux == 0)
			sa(s);
		else if ((*s)->id % aux == 1 && (*s)->next->id % aux == 2)
			rra(s);
		else if ((*s)->id % aux == 2 && (*s)->next->id % aux == 0)
			ra(s);
		else
		{
			sa(s);
			rra(s);
		}
	}
}
