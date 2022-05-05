/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:10:35 by mtacunan          #+#    #+#             */
/*   Updated: 2022/04/26 13:51:57 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
/*
** Parameters: ./client [server-pid] [message]
*/
void	send_char(int pid, char byte)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (byte % 2 == 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		byte /= 2;
		i++;
		usleep(600);
	}
}

int main(int argc, char **argv)
{
	//parametros PID y string
	int	pid;
	int	i;
	
	if (argc !=  3 || *argv[2] == 0)
	{
		write(1, "usage: ./client [server-pid] [message]\n", 39);
		return (1);
	}
	else
	{
		pid = atoi(argv[1]);
		i = 0;
		while (argv[2][i])
		{
			send_char(pid, argv[2][i]);
			i++;
		}
	}
	return (0);
}
