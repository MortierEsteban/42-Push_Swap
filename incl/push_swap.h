/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:19:09 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/11 10:19:35 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int		*tab;
	int		size;
	int		top;
}			t_stack;

char	*ft_join_ps(int ac, char **av);
void	ft_exit(void);
t_stack	ft_char_to_int(int ac, char **av);
void	doubleswap(int	*stacka, int *stackb, int topa, int topb);
void	swap(int *stack, char name, int top);
void	doublerotate(int *stacka, int *stackb, int *topa, int *topb);
void	rotate(int *stacka, int *topa, char stack);
void	push2a(int *stacka, int *stackb, int *topa, int	*topb);
void	push2b(int *stacka, int *stackb, int *topa, int	*topb);
void	ft_print_tab(int *tab, int size);
void	revrotate(int *stacka, int *topa, char stack);
void	double_revrotate(int *stacka, int *stackb, int *topa, int *topb);
char	*ft_join(char *s1, char *s2);
int		ft_isnan(char *s);
int		*init_tab(int *tab, int size);

#endif