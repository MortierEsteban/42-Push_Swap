/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:22:54 by marvin            #+#    #+#             */
/*   Updated: 2022/01/10 12:22:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse(int *stacka, int *topa, char stack)
{
	int	prevvalue;
	int tmp;
	int	rolldown;

	if (topa == 0)
		return;
	rolldown = topa;
	prevvalue = stacka[0];
	while(rolldown > 0)
	{
		tmp = stacka[rolldown];
		stacka[rolldown] = prevvalue;
		prevvalue = tmp;
		rolldown--;
	}
	write(1, "r", 1);
	if (stack == 'a' || stack == 'b')
	{
		write(1, &stack, 1);
		write(1, '\n', 1);
	}
}

void	doublereverse(int *stacka, int *stackb, int *topa, int *topb)
{
	if (topa > 0 && topb > 0)
	{
		reverse(stacka, &topa, 0);
		reverse(stackb, &topb, 0);
		write(1, '\n', 1);
	}
}