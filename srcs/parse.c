/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:37:16 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/11 11:02:37 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

char	*ft_join_ps(int ac, char **av)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	while (++i < ac)
	{
		if (!str)
			str = ft_strdup(av[i]);
		else
			str = ft_join(str, av[i]);
		str = ft_join(str, " ");
		if (!str)
			ft_exit();
	}
	return (str);
}

int	ft_check(char **tmp)
{
	int	i;
	int	j;

	i = 0;
	while (tmp[i])
	{
		j = i + 1;
		while (tmp[j])
		{
			if (!ft_strcmp(tmp[i], tmp[j]))
				ft_exit();
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_count_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_free(char	**tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
	ft_exit();
}

t_stack	ft_char_to_int(int ac, char **av)
{
	char	**tmp;
	char	*s;
	t_stack	tab;
	int		i;

	i = -1;
	tmp = NULL;
	s = ft_join_ps(ac, av);
	if (!s || ft_isnan(s) == 0)
		ft_exit();
	tmp = ft_split(s, ' ');
	free(s);
	if (ft_check(tmp) || !tmp)
		ft_free(tmp);
	tab.size = ft_count_tab(tmp);
	tab.top = ft_count_tab(tmp) - 1;
	tab.tab = malloc(sizeof(int) * tab.size);
	while (tmp[++i])
	{
		tab.tab[i] = ft_atoi(tmp[i]);
		free(tmp[i]);
	}
	free(tmp);
	return (tab);
}
