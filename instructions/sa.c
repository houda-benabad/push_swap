/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:03:31 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:20:39 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **stack_a)
{
	t_list	*tmp;

	tmp = (*stack_a)-> next;
	(*stack_a)-> next = tmp -> next;
	tmp -> next = NULL;
	ft_lstadd_front(stack_a, tmp);
	ft_printf("sa\n");
}
