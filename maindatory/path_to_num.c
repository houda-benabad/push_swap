/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_to_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:45:21 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:16:06 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	path_to_num(t_list *tmp, int num)
{
	int	len;

	len = 0;
	while (tmp)
	{
		if (tmp -> content == num)
			return (len);
		len++;
		tmp = tmp -> next;
	}
	return (0);
}
