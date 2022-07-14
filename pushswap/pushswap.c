/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:48:08 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/14 19:12:21 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	check_elements(char *stack)
{
	int	i;

	i = 0;
	while (stack[i])
	{
		if (!ft_isdigit(stack[i]) && stack[i] != ' '
			&& (stack[i] != '-' || !ft_isdigit(stack[i + 1])))
			return (0);
		i++;
	}
	return (1);
}

char	*add_nl(char *str)
{
	char	*aux;
	
	aux = ft_strdup(str);
	if (str[ft_strlen(str)] != '\n')
	{
		aux = ft_strjoin(aux,"\n");
		//free (aux);
		printf("%s\n",aux);
		return (aux);
	}
	return (aux);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*nums;

	i = 1;
	//nums = ft_strdup("");
	//queda aqui soluconar ordenes de nums y no se si se necesita algun auxiliar vergas
	while (i < argc)
	{
		nums = add_nl(argv[i]);
		nums = ft_strjoin(nums,argv[i]);
		i++;
	}
	//printf ("%s\n", nums);
	/*
	if (!check_elements(nums))
	{
		free(nums);
		write(2,"Solo se admiten números y sin repeticiones.\n",45);
		//jajalolxd lo de repetir ahora lo vemos
	}
	else
		printf("stack valido\n");
	*/
	//system("leaks a.out");
	return (0);
	/*check 
	->mal: liberar y sacar msj error
	->bien: ordenar
	*/

	/*algoritmo ordenacion*/
	
}
