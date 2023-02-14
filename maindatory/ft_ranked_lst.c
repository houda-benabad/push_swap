/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ranked_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:49:12 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/14 13:08:54 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_print_list(t_list *stack_a)
{
	int	*str;
	int	i;
	int	len;

	i = 0;
	len = ft_lstsize(stack_a);
	str = malloc ((len) * sizeof(int));
	while (stack_a)
	{
		str[i] = stack_a -> content;
		i++;
		stack_a = stack_a -> next;
	}
	return (str);
}

void	ft_str_rank(t_list **stack_a, int *str)
{
	int		i;
	int		rank;
	t_list	*tmp;

	i = 0;
	tmp = (*stack_a);
	rank = 0;
	while (tmp && i < ft_lstsize(*stack_a))
	{
		if (tmp -> content != str[i])
			tmp = tmp -> next;
		else if (tmp -> content == str[i])
		{
			tmp -> rank = rank;
			i++;
			rank++;
			tmp = (*stack_a);
		}
	}
}

void	if_to_sort(t_list **stack_a, int *str)
{
	int		i;
	int		check;
	t_list	*tmp;

	i = 0;
	check = 0;
	tmp = (*stack_a);
	while (i + 1 < ft_lstsize(*stack_a))
	{
		if (tmp -> content == str[i])
			check++;
		i++;
		tmp = tmp -> next;
	}
	if (check + 1 == ft_lstsize(*stack_a))
		exit(0);
}

void	ft_swap(int *a1, int *a2)
{
	int	tmp;

	tmp = *a1;
	*a1 = *a2;
	*a2 = tmp;
}

void	ft_ranked_lst(t_list **stack_a)
{
	int	*str;
	int	i;
	int	j;

	i = 0;
	str = ft_print_list (*stack_a);
	while (i + 1 < ft_lstsize(*stack_a))
	{
		j = i + 1;
		while (j < ft_lstsize(*stack_a))
		{
			if (str[j] == str[i])
				ft_error_printer(0);
			if (str[j] < str[i])
				ft_swap(&str[i], &str[j]);
			j++;
		}
		i++;
	}	
	if_to_sort(stack_a, str);
	ft_str_rank(stack_a, str);
	free(str);
}
