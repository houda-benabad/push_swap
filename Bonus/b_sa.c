/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_sa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:03:31 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/10 18:14:20 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	b_sa(t_list **stack_a)
{
	t_list	*tmp;

	if (*stack_a && ft_lstsize(*stack_a) != 1)
	{
		tmp = (*stack_a)-> next;
		(*stack_a)-> next = tmp -> next;
		tmp -> next = NULL;
		ft_lstadd_front(stack_a, tmp);
	}
}
