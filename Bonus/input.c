/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:01:35 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/11 14:39:08 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_check_which_insts(t_list **stack_a, t_list **stack_b, char *str)
{
	if (ft_strcmp(str, "rra\n") == 0)
		return (b_rra(stack_a), 1);
	else if (ft_strcmp(str, "rrb\n") == 0)
		return (b_rrb(stack_b), 1);
	else if (ft_strcmp(str, "rrr\n") == 0)
		return (b_rrr(stack_a, stack_b), 1);
	else if (ft_strcmp(str, "pa\n") == 0)
		return (b_pa(stack_a, stack_b), 1);
	else if (ft_strcmp(str, "pb\n") == 0)
		return (b_pb(stack_a, stack_b), 1);
	else if (ft_strcmp(str, "ra\n") == 0)
		return (b_ra(stack_a), 1);
	else if (ft_strcmp(str, "rb\n") == 0)
		return (b_rb(stack_b), 1);
	else if (ft_strcmp(str, "rr\n") == 0)
		return (b_rr(stack_a, stack_b), 1);
	else if (ft_strcmp(str, "sa\n") == 0)
		return (b_sa(stack_a), 1);
	else if (ft_strcmp(str, "sb\n") == 0)
		return (b_sb (stack_b), 1);
	else if (ft_strcmp(str, "ss\n") == 0)
		return (b_ss(stack_a, stack_b), 1);
	return (0);
}

void	input(t_list **stack_a, t_list **stack_b)
{
	char	*str;

	str = get_next_line(0);
	while (str != NULL)
	{
		if (ft_check_which_insts(stack_a, stack_b, str) == 0)
		{
			ft_printf("Error\nThis is no an Instruction.");
			exit(1);
		}
		free (str);
		str = get_next_line(0);
	}
}
