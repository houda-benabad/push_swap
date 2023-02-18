/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:56:02 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/16 15:47:17 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp_b;

	if (ft_lstsize(*stack_a) > 1)
	{
		tmp = (*stack_a)-> next;
		(*stack_a)-> next = tmp -> next;
		tmp -> next = NULL;
		ft_lstadd_front(stack_a, tmp);
	}
	if (ft_lstsize(*stack_b) > 1)
	{
		tmp_b = (*stack_b)-> next;
		(*stack_b)-> next = tmp_b -> next;
		tmp_b -> next = NULL;
		ft_lstadd_front(stack_b, tmp_b);
	}
	ft_printf("ss\n");
}
