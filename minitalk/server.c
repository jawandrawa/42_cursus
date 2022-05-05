/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:19:11 by mtacunan          #+#    #+#             */
/*   Updated: 2022/04/26 14:00:09 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"



int character;
int position;

void receive_bits(int signal)
{
	write(1,"r",1);
    if (signal == SIGUSR1)
        character |= 1 << position;
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
    struct  sigaction sig;
    int     pid;
	
	sigaction(SIGUSR1, &sig, NULL);
    sigaction(SIGUSR2, &sig, NULL);
    pid = getpid();
    printf("pid: %d\n",pid);
    sig.sa_handler = &receive_bits;
	

    while(1)
		sleep(1);
}

// int	main(void)
// {	 
// 	return (0);
// }