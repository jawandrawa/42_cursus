/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithym500.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:57:38 by mtacunan          #+#    #+#             */
/*   Updated: 2022/09/02 21:33:58 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/*
 * Este algoritmo seguira os siguientes pasos: 
 * 1- dividir stack_a de 50 en 50
 * 2- cuando size_a < 50 , dividir como en 100. Hasta >= 3 
 * 3- ordenar y buscar el siguiente
*/

void	div50(t_stack *sa, t_stack *sb, int round)
{
	int	moves;

	moves = 0;
	while (moves < 50)
	{
		if ((*sa)->id <= round * 100)
		{
			pb(sa, sb);
			moves++;
		}
		else
			ra(sa);
	}
}

void	sort500(t_stack *a, t_stack *b)
{
	int	round;

	round = 1;
	while (ft_lstsize(*a) > 50)
	{
		div50(a, b, round);
		round++;
	}
	sort(a, b);
}
