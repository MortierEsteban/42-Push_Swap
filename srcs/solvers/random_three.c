/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:53:42 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/13 13:21:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	ft_case_3(t_stack *st_a)
{
	if (st_a->tab[st_a->top - 1] < st_a->tab[st_a->top] && \
		st_a->tab[st_a->top] < st_a->tab[st_a->top - 2])
		swap(st_a->tab, 'a', st_a->top);
	else if (st_a->tab[st_a->top] > st_a->tab[st_a->top - 1] && \
			st_a->tab[st_a->top] > st_a->tab[st_a->top - 2] && \
			st_a->tab[st_a->top - 1] > st_a->tab[st_a->top - 2])
	{
		swap(st_a->tab, 'a', st_a->top);
		revrotate(st_a->tab, st_a->top, 'a');
	}
	else if (st_a->tab[st_a->top - 1] < st_a->tab[st_a->top] && \
		st_a->tab[st_a->top] > st_a->tab[st_a->top - 2])
		rotate(st_a->tab, st_a->top, 'a');
	else if (st_a->tab[st_a->top - 1] > st_a->tab[st_a->top] && \
			st_a->tab[st_a->top - 1] > st_a->tab[st_a->top - 2] && \
			st_a->tab[st_a->top] > st_a->tab[st_a->top - 2])
		revrotate(st_a->tab, st_a->top, 'a');
	else
	{	
		swap(st_a->tab, 'a', st_a->top);
		rotate(st_a->tab, st_a->top, 'a');
	}
}
