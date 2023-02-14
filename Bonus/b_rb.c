/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_rb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:34:17 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:31:23 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	b_rb(t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b)
	{
		tmp = (*stack_b);
		(*stack_b) = (*stack_b)-> next;
		tmp -> next = NULL;
		ft_lstadd_back(stack_b, tmp);
	}
}
