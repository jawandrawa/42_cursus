/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:42:54 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/31 16:17:08 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
/*0 : ra 1 : rra*/

int	find_node (t_stack *s, int nb)
{
	t_node	*aux;
	int		pos;

	pos = 0;
	aux = *s;
	while (aux)
	{
		if (aux->id == nb)
			return (pos);
		pos++;
		aux = aux->next;
	}
	return (pos);
}
