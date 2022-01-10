/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:38:33 by marvin            #+#    #+#             */
/*   Updated: 2022/01/10 11:38:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push2a(int *stacka, int *stackb, int *topa, int	*topb)
{
	topa++;
	stacka[topa] = stackb[topb];
	stackb[topb] = '\0';
	topb--;
	write(1, "pa\n", 3);
}

void    push2b(int *stacka, int *stackb, int *topa, int	*topb)
{
	topb++;
	stackb[topb] = stacka[topa];
	stacka[topa] = '\0';
	topa--;
	write(1, "pb\n", 3);
}