/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:40:46 by badrien           #+#    #+#             */
/*   Updated: 2019/07/24 12:06:36 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		x;
	int		nbtab;
	char	*temp;

	nbtab = 0;
	while (tab[nbtab])
		nbtab++;
	i = 0;
	x = 1;
	while (i < nbtab)
	{
		while (x < nbtab)
		{
			if (ft_strcmp(tab[i], tab[x]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[x];
				tab[x] = temp;
			}
			x++;
		}
		i++;
		x = i + 1;
	}
}
