/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:07:58 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/31 15:22:21 by mtacunan         ###   ########.fr       */
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
	t_node	*aux;

	aux = *s;
	if (!aux)
		return ;
	printf("content: %d | id: %d\n", aux->content, aux->id);
	while (aux->next)
	{
		aux = aux->next;
		printf("content: %d | id: %d\n", aux->content, aux->id);
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

