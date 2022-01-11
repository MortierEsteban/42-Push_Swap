/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:09:10 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/11 10:28:53 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	(void) stack_b;
	if (ac == 1)
	{
		ft_putstr_fd("Oops something went wrong\n", 1);
		ft_exit();
	}
	stack_a = ft_char_to_int(ac, av);
	stack_b.tab = malloc (sizeof(int) * stack_a.size);
	stack_b.tab = init_tab(stack_b.tab, stack_a.size);
	stack_b.top = -1;
	ft_print_tab(stack_a.tab, stack_a.size);
	free(stack_a.tab);
	free(stack_b.tab);
	return (0);
}

// 	dprintf(1, "Stack = A\n");
// 	ft_print_tab(stack_a.tab, stack_a.size);
// 	dprintf(1, "///////////////////////////////////////////////////////");
//	dprintf(1, "Stack = B\n");
	//ft_print_tab(stack_b.tab, stack_a.size);