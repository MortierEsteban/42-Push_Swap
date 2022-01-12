/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:34:39 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/12 01:41:45 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	ft_exit(void)
{
	ft_putstr_fd("Error.\n", 1);
	exit(1);
}

int	*init_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		tab[i] = 0;
	return (tab);
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

int	ft_isnan(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (!ft_isdigit(s[i]) && s[i] != ' ' && s[i] != '-')
			return (0);
	}
	return (1);
}

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = -1;
	// ft_putstr_fd("Maniere lolo : \n==============\n", 1);
	while (++i < size)
		ft_printf("%d ", tab[i]);
	// while (size > 0)
	// {
	// 	ft_printf("%d\n", tab[size - 1]);
	// 	size--;
	// }
	ft_putchar_fd('\n', 1);
}
