/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:07:58 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/23 14:10:10 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	sorted(t_stack *s)
{
	t_node	*aux;

	aux = *s;
	while (aux->next)
	{
		if (aux->id > aux->next->id)
			return (0);
		aux = aux->next;
	}
	return (1);
}

void	print_stack(t_stack *s)
{
	if (!*s)
		return ;
	printf("content: %d | id: %d\n", (*s)->content, (*s)->id);
	while ((*s)->next)
	{
		(*s) = (*s)->next;
		printf("content: %d | id: %d\n", (*s)->content, (*s)->id);
	}
}

void	free_elements(char **array)
{	
	int	i;

	i = 0;
	while (array[i])
	{
		free (array[i]);
		i++;
	}
	free (array);
}
