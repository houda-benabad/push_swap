/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:33:36 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/11 18:07:15 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_lst(t_list **stack_a)
{
	int		len;
	t_list	*stack_b;

	stack_b = NULL;
	len = ft_lstsize(*stack_a);
	if (ft_ranked_lst(stack_a) == 0)
	{
		if (len == 2)
			ft_two_args(stack_a);
		else if (len == 3)
			ft_three_args(stack_a);
		else if (len == 4)
			ft_four_args(stack_a, &stack_b);
		else if (len == 5)
			ft_five_args(stack_a, &stack_b);
		else if (len > 5)
		{
			from_sa_to_sb(stack_a, &stack_b);
			from_sb_to_sa(stack_a, &stack_b);
		}
	}
}
