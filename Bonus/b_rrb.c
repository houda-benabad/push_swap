/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_rrb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:59:04 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/16 15:41:51 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	b_rrb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*lastnode;

	if (ft_lstsize(*stack_b) > 1)
	{
		lastnode = ft_lstlast(*stack_b);
		tmp = *stack_b;
		while ((tmp -> next)-> next)
			tmp = tmp -> next;
		tmp -> next = NULL;
		ft_lstadd_front(stack_b, lastnode);
	}
}
