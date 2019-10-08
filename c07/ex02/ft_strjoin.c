/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:01:16 by badrien           #+#    #+#             */
/*   Updated: 2019/07/16 11:28:34 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	fill_in(char *retur, int size, char **strs, char *sep)
{
	int i;
	int y;
	int total;

	i = -1;
	y = 0;
	total = -1;
	while (y < size)
	{
		while (strs[y][++i] != '\0')
			retur[++total] = strs[y][i];
		i = -1;
		if (y != size - 1)
		{
			while (sep[++i] != '\0')
				retur[++total] = sep[i];
		}
		else
			retur[++total] = '\0';
		i = -1;
		y++;
	}
}

int		nbr_de_caract(int size, char **strs, char *sep)
{
	int i;
	int y;
	int total;
	int t_sep;

	i = 0;
	total = 0;
	y = size - 1;
	t_sep = 0;
	if (size == 0)
		return (0);
	while (sep[t_sep] != '\0')
		t_sep++;
	while (y >= 0)
	{
		while (strs[y][i] != '\0')
		{
			i++;
			total++;
		}
		total = total + t_sep;
		y--;
		i = 0;
	}
	return (total - t_sep);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total;
	char	*retur;

	total = nbr_de_caract(size, strs, sep);
	retur = malloc(sizeof(char) * (total + 1));
	if (retur == 0)
		return (0);
	fill_in(retur, size, strs, sep);
	return (retur);
}
