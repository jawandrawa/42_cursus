/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:02:28 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/10 13:55:37 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_node **lst, void (*del)(int))
{
	t_node	*aux;

	if (lst && del)
	{
		while (*lst)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
		lst = NULL;
	}
}
