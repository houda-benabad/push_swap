/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:30:11 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:17:44 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max_num(t_list *stack_b)
{
	int	max;

	max = INT_MIN;
	while (stack_b)
	{
		if (max < stack_b -> content)
			max = stack_b -> content;
		stack_b = stack_b -> next;
	}
	return (max);
}
