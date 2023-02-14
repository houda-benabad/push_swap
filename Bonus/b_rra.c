/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_rra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:38:23 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/10 18:13:21 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	b_rra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*lastnode;

	if (*stack_a && ft_lstsize(*stack_a) != 1)
	{
		lastnode = ft_lstlast(*stack_a);
		tmp = *stack_a;
		while ((tmp-> next)-> next)
			tmp = tmp -> next;
		tmp -> next = NULL;
		ft_lstadd_front(stack_a, lastnode);
	}
}
