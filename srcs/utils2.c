/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 01:41:25 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/12 01:46:03 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	ft_rev_int_tab(int	*tab, int size)
{
	int	i;
	int	tmp;

	i = -1;
	while (++i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
	}
}

void	ft_sort(int *tab, int size)
{
	int	i;	
	int	min;

	i = 0;
	while (i < size)
	{
		if (tab[i] < tab[i - 1] && i != 0)
		{
			min = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = min;
			i = 0;
		}
		else
			i++;
	}
}

t_stack	fill_tab(int ac, char **av)
{
	int		i;
	int		j;
	t_stack	cpy;
	t_stack	st_input;

	i = -1;
	st_input = ft_char_to_int(ac, av);
	cpy = ft_char_to_int(ac, av);
	ft_sort(cpy.tab, cpy.size);
	while (++i < st_input.size)
	{
		j = -1;
		while (++j < cpy.size)
		{
			if (st_input.tab[i] == cpy.tab[j])
			{
				st_input.tab[i] = j;
				break ;
			}
		}
	}
	free(cpy.tab);
	ft_rev_int_tab(st_input.tab, st_input.size);
	return (st_input);
}
