/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:31:18 by mtacunan          #+#    #+#             */
/*   Updated: 2022/07/23 15:11:43 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include "../minitalk/ft_printf/ft_printf.h"

typedef struct server
{
	int	g_character;
	int	g_position;
	int	srv_pid;	
}t_data;
int		ft_isdigit(int c);
int		ft_atoi(char *str);
char	*ft_itoa(int num);
void	*ft_calloc(size_t num, size_t size);
#endif