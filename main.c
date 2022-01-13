/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:09:10 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/13 11:15:35 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (ac == 1)
		exit(1);
	stack_a = fill_tab(ac, av);
	stack_b.tab = malloc(sizeof(int) * stack_a.size);
	stack_b.tab = init_tab(stack_b.tab, stack_a.size);
	stack_b.top = -1;
	if (stack_a.size == 2)
		swap(stack_a.tab, 'a', stack_a.top);
	else if (stack_a.size == 3)
		ft_case_3(&stack_a);
	else if (stack_a.size == 5)
		ft_case_5(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b);
	free(stack_a.tab);
	free(stack_b.tab);
	return (0);
}
