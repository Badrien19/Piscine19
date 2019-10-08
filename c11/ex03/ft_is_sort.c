/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:10:21 by badrien           #+#    #+#             */
/*   Updated: 2019/07/25 10:26:07 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int a;
	int b;

	a = 0;
	b = 0;
	i = 0;
	if (length == 0)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			a++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			b++;
		i++;
	}
	if (a == length - 1 || b == length - 1)
		return (1);
	return (0);
}
