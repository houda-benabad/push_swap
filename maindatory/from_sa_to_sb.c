/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_sa_to_sb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:56:52 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:05:38 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_which_base(t_list *stack_a, int *base)
{
	int	len;

	len = ft_lstsize(stack_a);
	if (len == 4 || (len > 5 && len <= 10))
		*base = 2;
	else if (len > 10 && len <= 100)
		*base = 4;
	else if (len > 100 && len <= 500)
		*base = 10;
}

void	push_to_sb(t_list **stack_a, t_list **stack_b, t_check *check)
{
	if ((*stack_a)-> rank < check -> chunk * check -> i)
	{
		if ((*stack_a)-> rank
			< (check -> chunk * check -> i) - check -> chunk / 2)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
		}
		else
			pb(stack_a, stack_b);
		check -> count++;
	}
	else
		ra(stack_a);
}

void	from_sa_to_sb(t_list **stack_a, t_list **stack_b)
{
	int		base;
	t_check	check;

	ft_which_base(*stack_a, &base);
	check.count = 0;
	check.i = 1;
	check.chunk = ft_lstsize(*stack_a) / base;
	if (ft_lstsize(*stack_a) % base != 0)
		check.chunk++;
	while (ft_lstsize(*stack_a))
	{
		push_to_sb(stack_a, stack_b, &check);
		if (check.chunk * check.i == check.count)
			check.i++;
	}
}
