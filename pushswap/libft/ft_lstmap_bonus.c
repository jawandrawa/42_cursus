/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:14:45 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/02 14:09:35 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int(*f)(int), void (*del)(int))
{
	t_list	*sol;
	t_list	*aux;

	sol = NULL;
	while (lst && aux)
	{
		aux = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&sol, aux);
		lst = lst->next;
	}
	if (!aux)
		ft_lstclear(&aux, del);
	return (sol);
}
