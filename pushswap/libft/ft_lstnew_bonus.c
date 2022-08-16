/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:09:21 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/16 16:24:44 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstnew(int content)
{
	t_node	*sol;

	sol = malloc(sizeof(t_node));
	if (!sol)
		return (NULL);
	sol->content = content;
	sol->next = NULL;
	sol->id = 0;
	return (sol);
}
