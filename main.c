/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:09:10 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/10 16:55:14 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:09:10 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/10 16:07:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

int	*init_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		tab[i] = 0;
	return (tab);
}

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
// 	dprintf(1, "Stack = A\n");
// 	ft_print_tab(stack_a.tab, stack_a.size);
// 	dprintf(1, "///////////////////////////////////////////////////////////////");
//	dprintf(1, "Stack = B\n");
	//ft_print_tab(stack_b.tab, stack_a.size);
	free(stack_a.tab);
	free(stack_b.tab);
	return (0);
}
