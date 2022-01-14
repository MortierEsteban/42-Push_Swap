/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:52:15 by marvin            #+#    #+#             */
/*   Updated: 2022/01/13 12:52:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	ft_freestacks(t_stack st_a, t_stack st_b)
{
	free (st_a.tab);
	free (st_b.tab);
}

void	ft_error(int	flag, t_stack stacka, t_stack stackb)
{
	if (flag == 0 || flag == 2)
		ft_freestacks(stacka, stackb);
	if (flag == 1)
		ft_printf("Error\n");
	exit (1);
}