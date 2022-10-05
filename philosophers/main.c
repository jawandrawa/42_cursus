/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:05:07 by mtacunan          #+#    #+#             */
/*   Updated: 2022/10/05 17:59:37 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void* present(void *arg)
{
	while(1)
	{
		sleep(1);
		printf("soy el filosofo 1\n");
	}
	return (NULL);
}

void	a_func()
{
	for(int i=0 ; i < 1; i++)
	{
		sleep(2);
		printf("a\n");
	}
}

int	main(int argc, char **argv)
{
	/*
	* number_of_philosophers : numeor de filos
	* time_to_die :
	* time_to_eat : 
	* time_to_sleep :
	* [number_of_times_each_philosopher_must_eat] :
	*/

	// if (argc != 5)
	// {
	// 	write(1, "introduzca : [t_muerte]  [t_comer] [t_dormir].\n", 47);
	// 	return (0);
	// }
	/*parseo*/
	/*
	antes de eso, como vamos a hacer el proyecto? hacemos una struct con los tenedores, una struc con los fflosofos
	*/
	//pthread_create();
	pthread_t h1 ;
	pthread_create(&h1 , NULL , present , NULL );
	a_func();
	printf("hola\n");
}