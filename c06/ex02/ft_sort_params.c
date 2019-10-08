/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 09:27:35 by badrien           #+#    #+#             */
/*   Updated: 2019/07/13 10:16:45 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

void	affichage(int argc, char *argv[])
{
	while (argc > 1)
	{
		ft_putstr(argv[argc - 1]);
		write(1, "\n", 1);
		argc--;
	}
}

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

int		main(int argc, char *argv[])
{
	int		i;
	int		x;
	char	*temp;

	if (argc == 1)
		return (0);
	i = 1;
	x = 2;
	while (i < argc)
	{
		while (x < argc)
		{
			if (ft_strcmp(argv[i], argv[x]) < 0)
			{
				temp = argv[i];
				argv[i] = argv[x];
				argv[x] = temp;
			}
			x++;
		}
		i++;
		x = i + 1;
	}
	affichage(argc, argv);
}
