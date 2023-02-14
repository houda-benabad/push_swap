/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_sb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:51:39 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:32:56 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	b_sb(t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b)
	{
		tmp = (*stack_b)-> next;
		(*stack_b)-> next = tmp -> next;
		tmp -> next = NULL;
		ft_lstadd_front(stack_b, tmp);
	}
}
