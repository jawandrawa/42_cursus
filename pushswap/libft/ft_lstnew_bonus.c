/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:09:21 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/10 13:56:28 by mtacunan         ###   ########.fr       */
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
	return (sol);
}
