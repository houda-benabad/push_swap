/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_rrb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:59:04 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/14 13:51:40 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	b_rrb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*lastnode;

	if (*stack_b && ft_lstsize(*stack_b) != 1)
	{
		lastnode = ft_lstlast(*stack_b);
		tmp = *stack_b;
		while ((tmp -> next)-> next)
			tmp = tmp -> next;
		tmp -> next = NULL;
		ft_lstadd_front(stack_b, lastnode);
	}
}
