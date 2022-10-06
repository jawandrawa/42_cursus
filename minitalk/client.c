/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:10:35 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/23 15:17:51 by mtacunan         ###   ########.fr       */
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

void	send_msg(int pid, char *msg)
{
	int	i;

	i = 0;
	while (msg[i])
	{
		send_char(pid, msg[i]);
		i++;
	}
	send_char(pid, '\n');
	return ;
}

int	valid_pid(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		pid_server;
	int		i;
	char	*pid_client;

	if (argc != 3 || !(valid_pid(argv[1])))
	{
		write(1, "usage: ./client [server-pid] [message]\n", 39);
		return (1);
	}
	else
	{
		pid_server = ft_atoi(argv[1]);
		pid_client = ft_itoa(getpid());
		send_msg(pid_server, argv[2]);
		i = -1;
	}
	return (0);
}
