/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_rr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:35:20 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/14 13:36:14 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	b_rr(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp_b;

	if (*stack_a && ft_lstsize(*stack_a) != 1)
	{
		tmp = (*stack_a);
		(*stack_a) = (*stack_a)-> next;
		tmp -> next = NULL;
		ft_lstadd_back(stack_a, tmp);
	}
	if (*stack_b)
	{
		tmp_b = (*stack_b);
		(*stack_b) = (*stack_b)-> next;
		tmp_b -> next = NULL;
		ft_lstadd_back(stack_b, tmp_b);
	}
}
