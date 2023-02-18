/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:44:50 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/18 10:10:08 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_args(t_check *check, char **p)
{
	int	j;
	int	i;

	j = 0;
	while (p[j])
	{
		i = 0;
		if (check -> arr[j] == 0
			|| ft_strlen(p[j]) != my_countnbr(check -> arr[j]))
		{
			while (p[j][i])
			{	
				if (p[j][i + 1] != '\0' && (p[j][0] == '-' || p[j][0] == '+'))
					i++;
				if (!(p[j][i] >= '0' && p[j][i] <= '9'))
					ft_error_printer (1);
				i++;
			}
		}
		j++;
	}
	return (0);
}
