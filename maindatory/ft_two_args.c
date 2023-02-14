/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:44:46 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:17:31 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_two_args(t_list **stack_a)
{
	if ((*stack_a)-> content > ((*stack_a)-> next)-> content)
		sa(stack_a);
}
