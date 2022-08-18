/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:48:13 by mtacunan          #+#    #+#             */
/*   Updated: 2022/08/18 14:12:05 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

	void	print_stack(t_node *node);
	int		check_elements(char **stack);
	int		check_reps(char	**nums);
	char	**starter(int argc, char** argv);
	void	sa(t_stack *lst);
	void	sb(t_stack *lst);
	void	ss(t_stack *stack_a, t_stack *stack_b);
	void	pb(t_stack *lst_a, t_stack *lst_b);
	void	pa(t_stack *stack_a, t_stack *stack_b);
	void	rra(t_stack *stack_a);
	void	rrb(t_stack *stack_b);
	void	rrr(t_stack *stack_a, t_stack *stack_b);	
	void	ra(t_stack *stack_a);
	void	rb(t_stack *stack_b);
	void	rr(t_stack *stack_a, t_stack *stack_b);	
	//-------functions of sorting-------//
	void	put_id(t_stack *stack_a, int nums);
	void	div_stack(t_stack *sa, t_stack *sb, int mediana, int size);
	int		sorted(t_stack *s);

#endif
