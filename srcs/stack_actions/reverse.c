/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:53:39 by marvin            #+#    #+#             */
/*   Updated: 2022/01/10 16:05:22 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	revrotate(int *stacka, int *topa, char stack)
{
	int	prevvalue;
	int	tmp;
	int	rollup;

	if (topa == 0)
		return ;
	rollup = 0;
	prevvalue = stacka[*topa];
	while (rollup < *topa)
	{
		tmp = stacka[rollup];
		stacka[rollup] = prevvalue;
		prevvalue = tmp;
		rollup++;
	}
	stacka[*topa] = prevvalue;
	write(1, "r", 1);
	if (stack == 'a' || stack == 'b')
	{
		write(1, "r", 1);
		write(1, &stack, 1);
		write(1, "\n", 1);
	}
}

void	double_revrotate(int *stacka, int *stackb, int *topa, int *topb)
{
	if (topa > 0 && topb > 0)
	{
		revrotate(stacka, topa, 0);
		revrotate(stackb, topb, 0);
		write(1, "r\n", 2);
	}
}
