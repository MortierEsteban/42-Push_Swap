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

#include "../../incl/push_swap.h"

void	rotate(int *stacka, int *topa, char stack)
{
	int	prevvalue;
	int	tmp;
	int	rolldown;

	if (topa == 0)
		return ;
	rolldown = *topa;
	prevvalue = stacka[0];
	while (rolldown > 0)
	{
		tmp = stacka[rolldown];
		stacka[rolldown] = prevvalue;
		prevvalue = tmp;
		rolldown--;
	}
	stacka[0] = prevvalue;
	write(1, "r", 1);
	if (stack == 'a' || stack == 'b')
	{
		write(1, &stack, 1);
		write(1, "\n", 1);
	}
}

void	doublerotate(int *stacka, int *stackb, int *topa, int *topb)
{
	if (topa > 0 && topb > 0)
	{
		rotate(stacka, topa, 0);
		rotate(stackb, topb, 0);
		write(1, "\n", 1);
	}
}