/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:59:04 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:19:59 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*lastnode;

	lastnode = ft_lstlast(*stack_b);
	tmp = *stack_b;
	while ((tmp -> next)-> next)
		tmp = tmp -> next;
	tmp -> next = NULL;
	ft_lstadd_front(stack_b, lastnode);
	ft_printf("rrb\n");
}
