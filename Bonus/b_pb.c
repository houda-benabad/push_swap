/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_pb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:03:01 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:30:19 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	b_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)-> next;
		tmp -> next = NULL;
		ft_lstadd_front(stack_b, tmp);
	}
}
