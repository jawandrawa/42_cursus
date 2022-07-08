/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:10:35 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/08 15:26:01 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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

int	main(int argc, char **argv)
{
	int		pid_server;
	int		i;
	char	*pid_client;

	pid_client = ft_itoa(getpid());
	if (argc != 3 || *argv[2] == 0)
	{
		write(1, "usage: ./client [server-pid] [message]\n", 39);
		return (1);
	}
	else
	{
		pid_server = ft_atoi(argv[1]);
		i = 0;
		while (argv[2][i])
		{
			send_char(pid_server, argv[2][i]);
			i++;
		}
		send_char(pid_server, '\n');
		i = -1;
		while (pid_client[i++])
			send_char(pid_server, pid_client[i]);
	}
	return (0);
}
