/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:02:56 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/10 13:55:53 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_node *lst, void (*del)(int))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free (lst);
}
