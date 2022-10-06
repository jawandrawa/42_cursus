/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:05:07 by mtacunan          #+#    #+#             */
/*   Updated: 2022/10/06 18:54:30 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

pthread_mutex_t	lock =PTHREAD_MUTEX_INITIALIZER;
void* present(void *arg)
{
	int	*id = (int	*)arg;
	printf("soy el filosofo %d\n", *id);
	return (NULL);
}

void	a_func(int limit)
{
	sleep(1);
}


/* ESTA HACIENDO 5 PHILOSOPHOS */
void	create_philos(int nb)
{
	int id;

	id = 1;
	while (id <= nb)
	{	
		pthread_t h1 ;
		pthread_create(&h1 , NULL , present , &id );
		a_func(nb);
		id++;
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
	// 	write(1, "introduzca : [n_philos] [t_muerte]  [t_comer] [t_dormir].\n", 58);
	// 	return (0);
	// }
	/*parseo*/
	/*
	antes de eso, como vamos a hacer el proyecto? hacemos una struct con los tenedores, una struc con los fflosofos
	*/
	//pthread_create();
	create_philos(5);
}
