/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_from_sb_to_sa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:39:19 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:15:50 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_from_sb_to_sa(t_list **stack_a, t_list **stack_b, int num)
{
	int	len;

	len = path_to_num(*stack_b, num);
	while (len <= ft_lstsize(*stack_b) / 2 && len)
	{
		rb(stack_b);
		len--;
	}
	while (len > ft_lstsize(*stack_b) / 2 && len != ft_lstsize(*stack_b))
	{
		rrb(stack_b);
		len++;
	}
	if (*stack_a && (*stack_a)-> content < (*stack_b)-> content)
	{
		pa(stack_a, stack_b);
		sa(stack_a);
	}
	else
		pa(stack_a, stack_b);
}
