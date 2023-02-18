/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:17:53 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/16 15:43:46 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **stack_a)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_a) > 1)
	{
		tmp = (*stack_a);
		(*stack_a) = (*stack_a)-> next;
		tmp -> next = NULL;
		ft_lstadd_back(stack_a, tmp);
		ft_printf("ra\n");
	}
}
