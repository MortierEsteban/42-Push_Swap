/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:37:16 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/10 13:20:04 by lsidan           ###   ########.fr       */
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
			str = ft_strjoin(av[i], " ");
		else
			str = ft_strjoin(str, av[i]);
		str = ft_strjoin(str, " ");
		if (!str)
			ft_exit();
	}
	return (str);
}

int	*ft_char_to_int(char *s)
{
	char **tmp;
	
	tmp = NULL;
	if (!s)
		ft_exit();
}
