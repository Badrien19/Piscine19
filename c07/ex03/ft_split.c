/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 13:58:39 by badrien           #+#    #+#             */
/*   Updated: 2019/07/22 13:48:07 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_in(char c, char *charset)
{
	int i;

	i = -1;
	while (charset[++i] != '\0')
		if (charset[i] == c)
			return (1);
	return (0);
}

int			motcounter(char *str, char *charset)
{
	int i;
	int mot;
	int motcount;

	motcount = 0;
	mot = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_in(str[i], charset))
		{
			if (mot++ == 0)
				motcount++;
		}
		else
			mot = 0;
		i++;
	}
	if (mot == 0)
		motcount++;
	return (motcount);
}

char		*fill(char *str, char *charset, int *i)
{
	char	*tmp;
	int		y;

	y = 0;
	while (is_in(str[*i], charset) && str[*i] != '\0')
		(*i)++;
	while (!is_in(str[(*i) + y], charset) && str[(*i) + y] != '\0')
		y++;
	tmp = malloc(sizeof(char) * (y + 1));
	if (tmp == 0)
		return (NULL);
	y = 0;
	while (!is_in(str[*i], charset) && str[*i] != '\0')
		tmp[y++] = str[(*i)++];
	tmp[y] = '\0';
	return (tmp);
}

char		**ft_split(char *str, char *charset)
{
	int		wordcount;
	char	**tab;
	int		x;
	int		i;

	x = 0;
	i = 0;
	wordcount = motcounter(str, charset);
	tab = malloc(sizeof(char *) * wordcount + 1);
	if (tab == 0)
		return (0);
	while (wordcount > 0)
	{
		tab[x++] = fill(str, charset, &i);
		wordcount--;
	}
	tab[x] = 0;
	return (tab);
}
