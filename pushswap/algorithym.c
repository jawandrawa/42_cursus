/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithym.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:25:45 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/18 14:13:23 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	sorted(t_stack *s)
{
	t_node	*aux;
	
	aux = *s;
	while (aux->next)
	{
		if(aux->id > aux->next->id)
			return(0);
		aux = aux->next;
	}
	return (1);
}

void	div_stack(t_stack *sa, t_stack *sb, int mediana, int size)
{
	/*dividir los numeros, en el sa nº<= mediana , sb  nº> mediana*/
	while(size > 0)
	{	
		if((*sa)->id <= mediana)
		{
			pb(sa, sb);
		}
		else
			ra(sa);
		size--;
	}
}

// void	order_sa(t_stack *sa)
// {
// 	if ((*sa)->id)
// }