/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 01:41:25 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/13 13:07:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	ft_rev_int_tab(int *tab, int size)
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
	t_stack	cpy;
	t_stack	st_input;

	st_input = ft_char_to_int(ac, av);
	if (ft_is_sorted(st_input.tab, st_input.size, 'a') == 1)
		ft_error(1, st_input, st_input);
	cpy = ft_char_to_int(ac, av);
	ft_sort(cpy.tab, cpy.size);
	ft_new_index(&st_input, &cpy);
	free(cpy.tab);
	ft_rev_int_tab(st_input.tab, st_input.size);
	return (st_input);
}

void	ft_new_index(t_stack *st_input, t_stack *cpy)
{
	int	i;
	int	j;

	i = -1;
	while (++i < st_input->size)
	{
		j = -1;
		while (++j < cpy->size)
		{
			if (st_input->tab[i] == cpy->tab[j])
			{
				st_input->tab[i] = j;
				break ;
			}
		}
	}
}

int	ft_is_sorted(int *tab, int size, char c)
{
	int	i;

	i = 0;
	if (c)
	{	
		while (i < size - 1)
		{
			if (tab[i] < tab[i + 1])
				i++;
			else
				return (0);
		}
	}
	else
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				i++;
			else
				return (0);
		}	
	}
	return (1);
}
