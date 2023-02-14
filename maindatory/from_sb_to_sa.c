/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_sb_to_sa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:36:06 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:15:16 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	from_sb_to_sa(t_list **stack_a, t_list **stack_b)
{
	push_from_sb_to_sa(stack_a, stack_b, get_max_num(*stack_b));
	while (ft_lstsize(*stack_b))
	{
		if (dst_to_the_wayout(*stack_a, *stack_b) == 1)
			push_from_sb_to_sa(stack_a, stack_b, get_max_num(*stack_b));
		else
			push_from_sb_to_sa(stack_a, stack_b, get_second_max_num(*stack_b));
	}
}
