/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_printer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:03:50 by mac               #+#    #+#             */
/*   Updated: 2023/02/14 13:14:55 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_error_printer(int a)
{
    if (a == 1)
        ft_printf("Error\nThis is not a number");
    else if (a == 0)
        ft_printf("Error\nThere is duplicates");
    exit (1);
}