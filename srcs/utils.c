/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:34:39 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/10 16:34:11 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	ft_exit(void)
{
	ft_putstr_fd("Error.\n", 1);
	exit(1);
}

char	*ft_join(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*txt;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	txt = malloc(i + j + 1);
	if (txt)
	{
		i = -1;
		j = -1;
		while (s1 && s1[++i])
			txt[i] = s1[i];
		if (i == -1)
			i = 0;
		while (s2 && s2[++j])
			txt[i + j] = s2[j];
		txt[i + j] = s2[j];
	}
	free(s1);
	return (txt);
}

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = -1;
	ft_putstr_fd("Maniere lolo : \n==============\n", 1);
	while (++i < size)
	{
		ft_putnbr_fd(tab[i], 1);
		ft_putchar_fd('\n', 1);
	}
	ft_putstr_fd("\n\nManiere esteban : \n==============\n", 1);
	while (size > 0)
	{
		ft_putnbr_fd(tab[size - 1], 1);
		ft_putchar_fd('\n', 1);
		size--;
	}
	ft_putstr_fd("\n==============\n", 1);
}
