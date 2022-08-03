/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:13:04 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/03 21:49:31 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

//anotaciones: al crear las listas
//se le puede poner un identificador,
// valorar ventajas y desventajjas
void	m_swap(t_list *lst)
{
	int	aux;
	if (ft_lstsize(lst) > 1)
	{
		aux = lst->content;
		lst->content = lst->next->content;
		lst->next->content = aux;
	}
}

void	ss(t_list *lst_a, t_list *lst_b)
{
	int	aux;
	if (ft_lstsize(lst_a) > 1)
	{
		m_swap(lst_a);
		m_swap(lst_b);
	}
}
void	pb(t_list *lst_a, t_list *lst_b)
{
	t_list	*aux;

	aux = ft_lstnew(lst_a->content);
	ft_lstadd_front(&lst_b, aux);
	
}

/*
void	pa(void)
{
	
}

void	rr(void)
{
	
}
*/