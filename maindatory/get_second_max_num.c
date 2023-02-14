/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_second_max_num.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:49:38 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:17:59 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_second_max_num(t_list *stack_b)
{
	int	max;
	int	max2;

	max = get_max_num(stack_b);
	max2 = INT_MIN;
	while (stack_b)
	{
		if (max2 < stack_b -> content && stack_b -> content != max)
			max2 = stack_b -> content;
		stack_b = stack_b -> next;
	}
	return (max2);
}
