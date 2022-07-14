/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:19:11 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/14 15:13:29 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

g_data *data_server;

void	receive_bits(int signal)
{	
	if (signal == SIGUSR1)
		data_server->g_character |= 1 << data_server->g_position;
	data_server->g_position++;
	if (data_server->g_position == 8)
	{
		data_server->g_position = 0;
		if (!data_server->g_character)
			write (1, "\n", 1);
		else
			write (1, &data_server->g_character, 1);
		data_server->g_character = 0;
	}
}

int	main(void)
{
	data_server = ft_calloc(sizeof(g_data),1);
	data_server->g_character = 0;
	data_server->g_position = 0;
	data_server->srv_pid = getpid();
	signal (SIGUSR1, receive_bits);
	signal (SIGUSR2, receive_bits);
	ft_printf("pid: %d\n", data_server->srv_pid);
	while (1)
		sleep (1);
}
