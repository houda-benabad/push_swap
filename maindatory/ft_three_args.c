/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:56:47 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:16:54 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_three_args(t_list **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)-> content;
	b = ((*stack_a)-> next)-> content;
	c = ft_lstlast(*stack_a)-> content;
	if (a > b && a > c && b > c)
		return (ra(stack_a), ft_three_args(stack_a), 0);
	else if (a < b && a > c && b > c)
		return (rra(stack_a), 0);
	else if (a > b && a < c && b < c)
		return (sa(stack_a), 0);
	else if (a > b && a > c && b < c)
		return (ra(stack_a), 0);
	else if (a < b && a < c && b > c)
		return (sa (stack_a), ft_three_args(stack_a), 0);
	return (0);
}
