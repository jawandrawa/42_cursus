/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithym100.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:14:27 by mtacunan          #+#    #+#             */
/*   Updated: 2022/09/19 16:17:23 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

/*
*	En el caso de ordenar 100 numeros divide en grupos de 20.
*	cuaando en a hay <20 números pasa al ultimo paso
*/

void	div20(t_stack *sa, t_stack *sb, int round)
{
	int	moves;

	moves = 0;
	while (moves < 20)
	{
		if ((*sa)->id <= round * 20)
		{
			pb(sa, sb);
			moves++;
		}
		else
			ra(sa);
	}
}

void	sort100(t_stack *a, t_stack *b)
{
	int	round;

	round = 1;
	while (ft_lstsize(*a) > 40)
	{
		div20(a, b, round);
		round++;
	}
	sort(a, b);
}
