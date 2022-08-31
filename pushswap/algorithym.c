/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithym.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:25:45 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/31 16:47:13 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"


/*idea: 
1- 	hacer un stack con los q deben moverse y 
	los movimientos que necesitamos
2-	mover el minimo
3-	volver a calcular 
	*/
t_stack *nodes2move(t_stack *sa, int media, int size)
{
	t_stack	*tomove;
	t_node	*aux;
	
	aux = *sa;
	size = ft_lstsize(*sa);
	tomove = ft_calloc(1, sizeof(t_stack));
	while(aux)
	{	
		if(aux->id < media)
			ft_lstadd_front(tomove, aux);
		aux = aux->next;
	}
	return (tomove);
}

void	div_stack(t_stack *sa, t_stack *sb, int media, int size)
{
	/*dividir los numeros, en el sa nº<= mediana , sb  nº> mediana*/
	while(size > 0)
	{	
		if((*sa)->id <= media)
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

void	sort(t_stack *a, t_stack *b)
{
	int	nums;
	int	next;

	nums = ft_lstsize(*a);
	while (nums > 3)
	{
		div_stack(a, b, get_media(a), ft_lstsize(*a));
		nums = ft_lstsize(*a);
	}
	
	if (nums == 2)
		sort2(a);
	if (nums == 3)
		sort3(a);
	next = (*a)->id - 1;
	nums = ft_lstsize(*b);
	while (nums)
	{
		if((*b)->id == next ||  ft_lstsize(*b) == 1)
		{
			pa(a,b);
			next = (*a)->id - 1;
		}
		else if(find_node(b, next) <= (ft_lstsize(*b) / 2))
		{
			rb(b);
		}
		else
			rrb(b);
		nums = ft_lstsize(*b);
	}
}

47 32 23 50 19 35 40 -2 -8 21 13 0 -17 34 -27 41 -25 -31 14 4 -23 -29 5 30 -4 33 44 45 -44 -5 49 7 -7 -15 31 -14 -13 2 9 -30 -10 -20 26 36 -32 -1 48 25 1 -16