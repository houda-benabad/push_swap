/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:10:05 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/10 18:06:45 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../push_swap.h"

void	b_sa(t_list **stack_a);
void	b_sb(t_list **stack_b);
void	b_ss(t_list **stack_a, t_list **stack_b);
void	b_pb(t_list **stack_a, t_list **stack_b);
void	b_pa(t_list **stack_a, t_list **stack_b);
void	b_ra(t_list **stack_a);
void	b_rb(t_list **stack_b);
void	b_rr(t_list **stack_a, t_list **stack_b);
void	b_rra(t_list **stack_a);
void	b_rrb(t_list **stack_b);
void	b_rrr(t_list **stack_a, t_list **stack_b);
void	input(t_list **stack_a, t_list **stack_b);
void	ft_check_sorted(t_list *stack_a, t_list *stack_b);

#endif