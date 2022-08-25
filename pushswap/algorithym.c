/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithym.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:25:45 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/25 22:24:19 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	div_stack(t_stack *sa, t_stack *sb, int media, int size)
{
	/*dividir los numeros, en el sa nº<= mediana , sb  nº> mediana*/
	while(size > 0)
	{	
		if((*sa)->id < media)
		{
			pb(sa, sb);
		}
		else
			ra(sa);
		size--;
	}
}

int	get_media(t_stack *s)
{
	t_node	*aux;
	int		res;

	res  = 0;
	aux = *s;
	while (aux)
	{
		res += aux->id;
		aux = aux->next;	
	}
	res /= ft_lstsize(*s);
	return (res);
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
	int	next;

	nums = ft_lstsize(*a);
	while (nums > 2)
	{
		div_stack(a, b, get_media(a), ft_lstsize(*a));
		nums = ft_lstsize(*a);
	}
	sort2(a);
	if	((*a)->id != 1)
		next = (*a)->id - 1;
	nums = ft_lstsize(*b);
	while (nums)
	{
		//printf("tamaño b: %d\n", nums);
		if((*b)->id == next ||  ft_lstsize(*b) == 1)
		{
			pa(a,b);
			next = (*a)->id - 1;
		}
		else
			rb(b);
		nums = ft_lstsize(*b);
	}	
}