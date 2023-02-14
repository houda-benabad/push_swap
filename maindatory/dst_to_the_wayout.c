/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dst_to_the_wayout.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:29:57 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:06:38 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	dst_to_the_wayout(t_list *stack_a, t_list *stack_b)
{
	int	len1;
	int	len2;

	len1 = path_to_num(stack_b, get_max_num(stack_b));
	len2 = path_to_num(stack_b, get_second_max_num(stack_b));
	if (len1 > ft_lstsize(stack_b) / 2)
		len1 = ft_lstsize(stack_b) - len1;
	if (len2 > ft_lstsize(stack_b) / 2)
		len2 = ft_lstsize(stack_b) - len2;
	if (get_max_num(stack_b) > stack_a -> content)
		return (1);
	if (len1 > len2)
		return (2);
	return (1);
}
