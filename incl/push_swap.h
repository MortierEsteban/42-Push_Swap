/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:19:09 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/12 16:40:09 by lsidan           ###   ########.fr       */
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

//SORT FUNCTIONS
void	ft_sort(int *tab, int size);
void	radix_sort(t_stack *st_a, t_stack *st_b);
void	ft_case_3(t_stack *st_a);
void	ft_case_5(t_stack *st_a, t_stack *st_b);

//PROCESS FUNCTIONS
void	ft_exit(void);
void	ft_print_tab(int *tab, int size);
void	ft_rev_int_tab(int	*tab, int size);
char	*ft_join_ps(int ac, char **av);
char	*ft_join(char *s1, char *s2);
int		*init_tab(int *tab, int size);
int		ft_isnan(char *s);
t_stack	ft_char_to_int(int ac, char **av);
t_stack	fill_tab(int ac, char **av);
void	ft_new_index(t_stack *st_input, t_stack *cpy);
int		ft_is_sorted(int *tab, int size, char c);
void	ft_push_back(t_stack *st_a, t_stack *st_b);

//SWAP
void	swap(int *stack, char name, int top);
void	doubleswap(int	*stacka, int *stackb, int topa, int topb);

//ROTATE
void	rotate(int *stacka, int *topa, char stack);
void	double_rotate(int *stacka, int *stackb, int *topa, int *topb);
void	revrotate(int *stacka, int *topa, char stack);
void	double_revrotate(int *stacka, int *stackb, int *topa, int *topb);

//PUSH
void	push2a(int *stacka, int *stackb, int *topa, int	*topb);
void	push2b(int *stacka, int *stackb, int *topa, int	*topb);

#endif