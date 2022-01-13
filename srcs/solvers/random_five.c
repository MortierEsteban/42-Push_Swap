/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_five.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:48:10 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/13 11:54:03 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	ft_case_5(t_stack *st_a, t_stack *st_b)
{
	if (st_a->tab[0] == 0)
		revrotate(st_a->tab, &st_a->top, 'a');
	while (st_a->tab[st_a->top] != 0)
		rotate(st_a->tab, &st_a->top, 'a');
	if (st_a->tab[st_a->top] == 0)
		push2b(st_a->tab, st_b->tab, &st_a->top, &st_b->top);
	while (st_a->tab[st_a->top] != 1)
		rotate(st_a->tab, &st_a->top, 'a');
	if (st_a->tab[st_a->top] == 1)
		push2b(st_a->tab, st_b->tab, &st_a->top, &st_b->top);
	if (!ft_is_sorted(st_a->tab, st_a->top + 1, 0))
		ft_case_3(st_a);
	while (st_b->top != -1)
		push2a(st_a->tab, st_b->tab, &st_a->top, &st_b->top);
}
