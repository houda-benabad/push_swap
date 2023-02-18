/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:35:20 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/16 15:44:10 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp_b;

	if (ft_lstsize(*stack_a) > 1)
	{
		tmp = (*stack_a);
		(*stack_a) = (*stack_a)-> next;
		tmp -> next = NULL;
		ft_lstadd_back(stack_a, tmp);
	}
	if (ft_lstsize(*stack_b) > 1)
	{
		tmp_b = (*stack_b);
		(*stack_b) = (*stack_b)-> next;
		tmp_b -> next = NULL;
		ft_lstadd_back(stack_b, tmp_b);
	}
	ft_printf("rr\n");
}
