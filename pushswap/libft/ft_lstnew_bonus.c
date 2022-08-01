/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:09:21 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/01 13:34:58 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*sol;

	sol = malloc(sizeof(t_list));
	if (!sol)
		return (NULL);
	sol->content = content;
	sol->next = NULL;
	return (sol);
}
