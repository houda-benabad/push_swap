/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:11:28 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/11 18:06:29 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_check_sorted(t_list *stack_a, t_list *stack_b)
{
	int		i;
	int		check;
	t_list	*tmp;

	i = 0;
	check = 0;
	tmp = stack_a;
	while (tmp && tmp->next)
	{
		if (tmp-> content < (tmp -> next)-> content)
			check++;
		else if (tmp -> content == (tmp -> next)-> content)
		{	
			ft_printf("Error\nthere is duplicates.");
			exit(1);
		}	
		i++;
		tmp = tmp -> next;
	}
	free(tmp);
	if (check + 1 == ft_lstsize(stack_a) && stack_b == NULL)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}
