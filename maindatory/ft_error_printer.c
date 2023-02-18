/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_printer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:10:18 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/18 10:03:40 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error_printer(int a)
{
	if (a == 1)
		ft_printf("Error\nThis is not a number");
	else if (a == 2)
		ft_printf("Error\n");
	else if (a == 0)
		ft_printf("Error\nThere is duplicates");
	exit (1);
}
