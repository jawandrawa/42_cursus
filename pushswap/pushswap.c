/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:48:08 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/08 17:29:01 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_isdigit(int c)
{
	if (! (c >= '0' && c <= '9'))
		return (0);
	return (1);
}

int	check_elements(char *stack)
{
	int	i;

	i = 0;
	while (stack[i])
	{
		if (!ft_isdigit(stack[i]))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	/*guardar argv[i] : gnl y split*/


	/*check 
	->mal: liberar y sacar msj error
	->bien: ordenar
	*/

	/*algoritmo ordenacion*/
	
}
