/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_four_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:41:39 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:46:35 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_search_min4(t_list *tmp)
{
	int	min;

	min = INT_MAX;
	while (tmp)
	{
		if (tmp -> content < min)
			min = tmp -> content;
		tmp = tmp -> next;
	}
	return (min);
}

void	ft_push_to_sb4(t_list **stack_a, t_list **stack_b)
{
	int	len;

	len = path_to_num(*stack_a, ft_search_min4(*stack_a));
	while (len <= ft_lstsize(*stack_a) / 2 && len)
	{
		ra(stack_a);
		len--;
	}
	while (len > ft_lstsize(*stack_a) / 2 && len != ft_lstsize(*stack_a))
	{
		rra(stack_a);
		len++;
	}
	pb(stack_a, stack_b);
}

void	ft_four_args(t_list **stack_a, t_list **stack_b)
{
	ft_push_to_sb4(stack_a, stack_b);
	ft_three_args(stack_a);
	pa(stack_a, stack_b);
}
