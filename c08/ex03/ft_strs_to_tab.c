/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:36:45 by badrien           #+#    #+#             */
/*   Updated: 2019/07/21 16:21:03 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char				*ft_strncpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int					fonction(char *str, t_stock_str *struc, int i)
{
	if (i == 1)
		struc->str = 0;
	else
	{
		while (str[i] != '\0')
			i++;
		struc->copy = (char *)malloc(sizeof(char) * (i + 1));
		if (struc->copy == 0)
			return (1);
		struc->str = str;
		struc->copy = ft_strncpy(struc->copy, str);
		struc->size = i + 1;
	}
	return (0);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*p;

	p = malloc(sizeof(t_stock_str) * (ac + 1));
	if (p == 0)
		return (p);
	i = 0;
	if (ac == 0)
		return (0);
	while (i < ac)
	{
		if (fonction(av[i], &p[i], 0))
			return (0);
		i++;
	}
	fonction(&av[i][0], &p[i], 1);
	return (p);
}
