/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:48:13 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/10 17:02:14 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

	int	check_elements(char **stack);
	int	check_reps(char	**nums);
	char	**starter(int argc, char** argv);
	void	m_swap(t_stack *lst);
	void	ss(t_stack *stack_a, t_stack *stack_b);
	void	pb(t_stack *lst_a, t_stack *lst_b);
	void	pa(t_stack *stack_a, t_stack *stack_b);
	void	ra(t_stack *stack_a);
#endif
