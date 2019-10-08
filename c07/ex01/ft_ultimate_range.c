/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 10:04:14 by badrien           #+#    #+#             */
/*   Updated: 2019/07/16 11:27:44 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int			i;
	long int	taille;

	i = 1;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	taille = max - min;
	*range = malloc(sizeof(int) * taille);
	if (*range == NULL)
		return (0);
	while (taille > 0)
	{
		(*range)[taille - 1] = max - i;
		taille--;
		i++;
	}
	return (i - 1);
}
