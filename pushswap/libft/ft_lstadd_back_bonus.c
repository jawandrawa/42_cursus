/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:08:45 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/10 15:42:27 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_stack *lst, t_node *new)
{
	t_node	*cpy;

	if (!new)
		return ;
	if (!(*lst))
	{
		*(lst) = new;
		new->next = NULL;
		return ;
	}
	else
	{
		cpy = *lst;
		*lst = ft_lstlast(*lst);
		(*lst)->next = new;
		(*lst) = cpy;
	}
}
