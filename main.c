/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:09:10 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/10 13:33:14 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

int	main(int ac, char **av)
{
	char	*str;
	int		*tab;

	str = NULL;
	if (ac == 1)
	{
		ft_putstr_fd("Oops something went wrong\n", 1);
		ft_exit();
	}
	str = ft_join_ps(ac, av);
	tab = ft_char_to_int(str);
	for (int i = 0; i <= ac + 10; i++)
	{
		ft_putnbr_fd(tab[i], 1);
		ft_putchar_fd('\n', 1);
	}
	free(str);
	free(tab);
	return (0);
}