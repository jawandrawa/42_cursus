/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:19:11 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/08 15:04:46 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_character;
int	g_position;

void	receive_bits(int signal)
{
	if (signal == SIGUSR1)
		g_character |= 1 << g_position;
	if (signal == SIGUSR2)
		g_character |= 0 << g_position;
	g_position++;
	if (g_position == 8)
	{
		g_position = 0;
		if (!g_character)
			write (1, "\n", 1);
		else
			write (1, &g_character, 1);
		g_character = 0;
	}
}

int	main(void)
{
	int	pid;

	g_character = 0;
	g_position = 0;
	pid = getpid();
	signal (SIGUSR1, receive_bits);
	signal (SIGUSR2, receive_bits);
	ft_printf("pid: %d\n", pid);
	while (1)
		sleep (1);
}
