/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:00:12 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/16 15:44:40 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp_b;
	t_list	*lastnode;
	t_list	*lastnode_b;

	if (ft_lstsize(*stack_a) > 1)
	{
		lastnode = ft_lstlast(*stack_a);
		tmp = *stack_a;
		while ((tmp -> next)-> next)
			tmp = tmp -> next;
		tmp -> next = NULL;
		ft_lstadd_front(stack_a, lastnode);
	}
	if (ft_lstsize(*stack_b) > 1)
	{
		lastnode_b = ft_lstlast(*stack_b);
		tmp_b = *stack_b;
		while ((tmp_b -> next)-> next)
			tmp_b = tmp_b -> next;
		tmp_b -> next = NULL;
		ft_lstadd_front(stack_b, lastnode_b);
	}
	ft_printf("rrr\n");
}
