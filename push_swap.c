/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:40:52 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/14 13:08:02 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	t_check	check;
	char	**p;
	int		j;

	stack_a = NULL;
	j = 1;
	if (ac >= 2)
	{
		while (av[j])
		{
			p = ft_split(av[j], ' ');
			if (p[0] != NULL)
			{
				change_to_number(p, &check);
				ft_check_args(&check, p);
				ft_push_to_sa(&stack_a, &check, p);
				ft_free_p(p, &check);
			}
			j++;
		}
		ft_sort_lst(&stack_a);
	}
	return (0);
}