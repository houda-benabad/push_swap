/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:34:17 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/16 15:43:59 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_list **stack_b)
{
	t_list	*tmp;

	if (ft_lstsize(*stack_b) > 1)
	{
		tmp = (*stack_b);
		(*stack_b) = (*stack_b)-> next;
		tmp -> next = NULL;
		ft_lstadd_back(stack_b, tmp);
		ft_printf("rb\n");
	}
}
