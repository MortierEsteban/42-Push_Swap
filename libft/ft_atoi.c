/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:17:56 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/10 16:39:40 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static void	ft_exit(void)
{
	ft_putstr_fd("Erroratoi.\n", 1);
	exit(1);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	nb;
	int		sign;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\n' || \
		str[i] == '\t' || str[i] == '\v' || \
			str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if ((nb > 2147483647 && sign == 1) || (nb > 2147483648 && sign == -1))
		ft_exit();
	return (nb * sign);
}
