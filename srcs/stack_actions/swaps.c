/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:24:25 by marvin            #+#    #+#             */
/*   Updated: 2022/01/10 11:24:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	swap(int *stack, char name, int top)
{
	int		tmp;

	if (top == 0)
		return ;
	tmp = stack[top];
	stack[top] = stack[top - 1];
	stack [top - 1] = tmp;
	write (1, "s", 1);
	if (name == 'a' || name == 'b')
		ft_printf("%c\n", name);
}

void	doubleswap(int	*stacka, int *stackb, int topa, int topb)
{
	if (topa > 0 && topb > 0)
	{
		swap(stacka, 0, topa);
		swap(stackb, 0, topb);
		write(1, "\n", 1);
	}
}
