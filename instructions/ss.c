/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:56:02 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/14 13:33:58 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp_sb;

	tmp = (*stack_a)-> next;
	(*stack_a)-> next = tmp -> next;
	tmp -> next = NULL;
	ft_lstadd_front(stack_a, tmp);
	if (ft_lstsize(*stack_b) != 1)
	{
		tmp_sb = (*stack_b)-> next;
		(*stack_b)-> next = tmp_sb -> next;
		tmp_sb -> next = NULL;
		ft_lstadd_front(stack_b, tmp_sb);
	}
	ft_printf("ss\n");
}
