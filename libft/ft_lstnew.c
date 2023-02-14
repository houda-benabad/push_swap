/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:50:37 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:26:39 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*p;

	p = malloc(sizeof (t_list));
	if (!p)
		return (NULL);
	p -> content = content;
	p -> next = NULL;
	return (p);
}
