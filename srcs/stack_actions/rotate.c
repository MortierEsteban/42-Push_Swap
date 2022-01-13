/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:53:39 by marvin            #+#    #+#             */
/*   Updated: 2022/01/13 13:22:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	rotate(int *stacka, int topa, char stack)
{
	int	prevvalue;
	int	tmp;
	int	rollup;

	if (topa == 0)
		return ;
	rollup = 0;
	prevvalue = stacka[topa];
	while (rollup < topa)
	{
		tmp = stacka[rollup];
		stacka[rollup] = prevvalue;
		prevvalue = tmp;
		rollup++;
	}
	stacka[topa] = prevvalue;
	if (stack == 'a' || stack == 'b')
		ft_printf("r%c\n", stack);
}

void	double_rotate(int *stacka, int *stackb, int topa, int topb)
{
	if (topa > 0 && topb > 0)
	{
		revrotate(stacka, topa, 0);
		revrotate(stackb, topb, 0);
		ft_printf("rrr\n");
	}
}
