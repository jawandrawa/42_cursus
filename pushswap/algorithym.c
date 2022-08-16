/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithym.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:15:03 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/16 16:50:16 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	get_min(t_stack *stack_a)
{
	int 	res;
	t_node	*aux;
	
	res = (*stack_a)->content;
	aux = *stack_a;
	while(aux)
	{
		if(aux->content < res)
			res = aux->content;
		aux = aux->next;	
	}
	return (res);
}

void	put_id(t_stack *stack_a)
{
	/*
		0-poner id_posicion(id) a cada uno de los numeros
	*/
	int	min;

	min = get_min(stack_a);
	printf("minimo : %d\n", min);
}



/*
		1-buscar el minimo
		2-mmandarlo al stack_b
		3- buscar el siguiente mas chikito
*/