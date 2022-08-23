/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithym.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:25:45 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/23 13:56:24 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

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

/*
	deben quedar de menor a mayor
	ver si es 
*/
void	order_sa(t_stack *sa)
{
	int	min;

	if (!sorted(sa))
	{
		min = get_min(sa);
	}
}

/*deben quedar de mayor a menor*/
void	order_sb(t_stack *sb)
{
	if ((*sb)->id)
	{
		
	}
}

void	sort(t_stack *a, t_stack *b)
{
	int	nums;

	nums = ft_lstsize(*a);
	div_stack(a, b, nums/2, nums);
}