/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_five.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:48:10 by lsidan            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/01/14 09:46:50 by lsidan           ###   ########.fr       */
=======
/*   Updated: 2022/01/13 13:23:24 by marvin           ###   ########.fr       */
>>>>>>> 47d11bf85d006d684474879a9c83ccfe84a3618b
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	ft_case_5(t_stack *st_a, t_stack *st_b)
{
	if (st_a->tab[0] == 0)
		revrotate(st_a->tab, st_a->top, 'a');
	while (st_a->tab[st_a->top] != 0)
		rotate(st_a->tab, st_a->top, 'a');
	if (st_a->tab[st_a->top] == 0)
		push2b(st_a->tab, st_b->tab, &st_a->top, &st_b->top);
	if (st_a->tab[0] == 1)
		revrotate(st_a->tab, &st_a->top, 'a');
	while (st_a->tab[st_a->top] != 1)
		rotate(st_a->tab, st_a->top, 'a');
	if (st_a->tab[st_a->top] == 1)
		push2b(st_a->tab, st_b->tab, &st_a->top, &st_b->top);
	if (!ft_is_sorted(st_a->tab, st_a->top + 1, 0))
		ft_case_3(st_a);
	while (st_b->top != -1)
		push2a(st_a->tab, st_b->tab, &st_a->top, &st_b->top);
}
