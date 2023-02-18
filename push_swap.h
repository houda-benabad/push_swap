/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:46:53 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/15 17:12:13 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct check
{
	int	check;
	int	j;
	int	i;
	int	chunk;
	int	count;
	int	*arr;
}	t_check;

int		ft_check_args(t_check *check, char **p);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	ft_two_args(t_list **stack_a);
int		ft_three_args(t_list **stack_a);
void	ft_five_args(t_list **stack_a, t_list **stack_b);
int		ft_ranked_lst(t_list **stack_a);
void	from_sa_to_sb(t_list **stack_a, t_list **stack_b);
void	from_sb_to_sa(t_list **stack_a, t_list **stack_b);
int		get_max_num(t_list *stack_a);
int		get_second_max_num(t_list *stack_b);
int		path_to_num(t_list *tmp, int num);
void	ft_sort_lst(t_list **stack_a);
void	push_from_sb_to_sa(t_list **stack_a, t_list **stack_b, int num);
int		dst_to_the_wayout(t_list *stack_a, t_list *stack_b);
void	ft_four_args(t_list **stack_a, t_list **stack_b);
void	ft_error_printer(int a);
#endif