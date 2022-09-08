/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithym100.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:14:27 by mtacunan          #+#    #+#             */
/*   Updated: 2022/09/08 17:25:45 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

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
	while (ft_lstsize(*a) > 20)
	{
		div20(a, b, round);
		round++;
	}
	sort(a, b);
}
