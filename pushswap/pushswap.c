/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:48:08 by mtacunan          #+#    #+#             */
/*   Updated: 2022/09/02 21:27:23 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_stack	*create_stacka(int argc, char **argv)
{
	t_stack	*a;
	t_node	*aux;
	int		i;
	char	**data;

	data = get_data(argc, argv);
	a = ft_calloc(sizeof(t_stack), 1);
	if (!a)
		exit(0);
	*a = NULL;
	i = 0;
	while (data[i])
	{
		aux = ft_lstnew((int)ft_atoi(data[i]), 0);
		ft_lstadd_back(a, aux);
		i++;
	}
	free_elements(data);
	put_id(a, ft_lstsize(*a));
	return (a);
}

t_stack	*create_stackb(void)
{
	t_stack	*sol;

	sol = ft_calloc(sizeof(t_stack), 1);
	*sol = NULL;
	return (sol);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc == 1)
		return (-1);
	if (!check_all(argc, argv))
	{
		printf("awa\n");
		return (0);
	}
	stack_a = create_stacka(argc, argv);
	stack_b = create_stackb();
	if (ft_lstsize(*stack_a) == 1)
		return (0);
	else if (ft_lstsize(*stack_a) == 2)
		sort2(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort3(stack_a);
	else if (ft_lstsize(*stack_a) < 101)
		sort100(stack_a, stack_b);
	else
		sort500(stack_a, stack_b);
	//system("leaks push_swap");
	return (0);
}

/*Da problemas con 
-135 -129 -50 -77 55 88 82 -83 -12 44 125 -58 5 95 50 25 -142 47 83 -80 
1 -85 -13 31 -39 -94 -125 -82 28 58 33 -49 -3 -29 -111 -45 90 135 -101 -57 27 -147 -28 120 62 -131 57 -124 
-90 110 91 -32 72 -15 -63 59 64 77 -21 -136 -56 14 -44 -41 -76 105 117 
106 -89 -14 -126 -121 143 -25 -55 30 -75 12 93 97 -74 -86 48 52 112 39
 -141 53 -52 11 -67 -144 3 -1 138 123 69 -51 -27 -139 -69 147 115 101 84 45 75 -96 18 
 19 -91 68 139 107 -60 36 26 -9 9 132 -40 81 -30 98 24 133 66 -6 -112 -8 108 -119 -87 -36 146 
65 100 49 -115 111 -122 116 102 -26 -84 -23 -138 7
*/