/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:40:31 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/31 13:19:03 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort3(t_stack *s)
{
	int	aux;

	aux = (*s)->id;
	if(!sorted(s))
	{
		if((*s)->next->id == aux + 2)
		{
			sa(s);
			ra(s);
		}
		else if((*s)->next->id == aux - 1)
			sa(s);
		else if((*s)->next->id == aux + 1)
			rra(s);
		else if((*s)->next->id == aux - 2)
			ra(s);
		else
		{
			sa(s);
			rra(s);
		}
	}
}

/*

		if(!sorted(s))
	{
		if((*s)->id == 1 && (*s)->next->id == 3)
		{
			sa(s);
			ra(s);
		}
		else if((*s)->id == 2 && (*s)->next->id == 1)
			sa(s);
		else if((*s)->id == 2 && (*s)->next->id == 3)
			rra(s);
		else if((*s)->id == 3 && (*s)->next->id == 1)
			ra(s);
		else
		{
			sa(s);
			rra(s);
		}
	}

*/