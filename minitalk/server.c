/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:19:11 by mtacunan          #+#    #+#             */
/*   Updated: 2022/05/05 15:27:06 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"



int character;
int position;

void receive_bits(int signal)
{
    if (signal == SIGUSR1)
        character |= 1 << position;
	if (signal == SIGUSR2)
        character |= 0 << position;
    position++;
    if (position == 8)
    {
        position = 0;
        if(!character)
            write(1, "\n", 1);
        else
			write(1,&character,1);
        character = 0;
    }
}

int main(void)
{
    character = 0;
    position = 0;
    int     pid;
	
    pid = getpid();
	signal(SIGUSR1, receive_bits);
	signal(SIGUSR2, receive_bits);
    printf("pid: %d\n",pid);

    while(1)
		sleep(1);
}

// int	main(void)
// {	 
// 	return (0);
// }