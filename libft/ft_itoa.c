/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hobenaba <hobenaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:37:19 by hobenaba          #+#    #+#             */
/*   Updated: 2023/02/07 10:27:46 by hobenaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_signe(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*p;
	size_t	i;
	int		res;
	size_t	a;

	res = 0;
	a = 0;
	i = my_countnbr(n);
	p = malloc(sizeof(char) * (my_countnbr(n) + 1));
	if (!p)
		return (NULL);
	p[my_countnbr(n)] = '\0';
	if (n < 0)
	{
		p[0] = '-';
		a = 1;
	}
	while (--i >= a)
	{
		res = ft_signe(n % 10);
		p[i] = res + '0';
		n /= 10;
	}
	return (p);
}
