/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:09:10 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/10 13:08:27 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

int	main(int ac, char **av)
{
	char	*str;

	str = NULL;
	if (ac == 1)
	{
		ft_putstr_fd("Oops something went wrong\n", 1);
		ft_exit();
	}
	str = ft_join_ps(ac, av);
	ft_putstr_fd(str, 1);
	return (0);
}
