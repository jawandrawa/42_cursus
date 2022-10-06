/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:19:11 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/23 15:17:18 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_data	*g_server;

void	receive_bits(int signal)
{	
	if (signal == SIGUSR1)
		g_server->g_character |= 1 << g_server->g_position;
	g_server->g_position++;
	if (g_server->g_position == 8)
	{
		g_server->g_position = 0;
		if (!g_server->g_character)
			write (1, "\n", 1);
		else
			write (1, &g_server->g_character, 1);
		g_server->g_character = 0;
	}
}

int	main(void)
{
	g_server = ft_calloc(sizeof(t_data), 1);
	g_server->g_character = 0;
	g_server->g_position = 0;
	g_server->srv_pid = getpid();
	signal (SIGUSR1, receive_bits);
	signal (SIGUSR2, receive_bits);
	ft_printf("pid: %d\n", g_server->srv_pid);
	while (1)
		sleep (1);
}
