/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 19:12:56 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/14 13:29:53 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_duplicates(t_list *stack_a)
{
	t_list	*tmp;

	while (stack_a)
	{
		tmp = stack_a -> next;
		while (tmp)
		{
			if (tmp -> content == stack_a -> content)
			{
				ft_printf("Error\nThere is duplicates");
				exit (1);
			}
			tmp = tmp -> next;
		}
		stack_a = stack_a -> next;
	}
}

void	ft_push_to_sa(t_list **stack_a, t_check *check, char **p)
{
	int	j;

	j = 0;
	if (*stack_a == NULL)
	{
		*stack_a = ft_lstnew(check -> arr[0]);
		j++;
	}
	while (j < ft_dostrlen(p))
	{
		ft_lstadd_back(stack_a, ft_lstnew(check -> arr[j]));
		j++;
	}
	check_duplicates(*stack_a);
}

void	change_to_number(char **p, t_check *check)
{
	int	i;

	i = 0;
	check -> arr = malloc (ft_dostrlen(p) * sizeof(int *));
	while (p[i])
	{
		check -> arr[i] = ft_atoi(p[i]);
		i++;
	}
}

void	ft_free_p(char **p, t_check *check)
{
	int	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(p);
	free(check -> arr);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_check	check;
	char	**p;

	stack_a = NULL;
	stack_b = NULL;
	check.j = 0;
	if (ac >= 2)
	{
		while (av[++check.j])
		{
			p = ft_split(av[check.j], ' ');
			if (p[0] != NULL)
			{
				change_to_number(p, &check);
				ft_check_args(&check, p);
				ft_push_to_sa(&stack_a, &check, p);
			}
			ft_free_p(p, &check);
		}
		input(&stack_a, &stack_b);
		ft_check_sorted(stack_a, stack_b);
	}
}
