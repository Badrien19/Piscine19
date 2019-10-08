/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:24:35 by badrien           #+#    #+#             */
/*   Updated: 2019/07/25 14:29:48 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int				value_of(char c, char *base_from);
int				size_checker(char *nbr, char *base_from, int start);
int				debut_nb(char *str, int *minus);
int				not_correct(char *base);
int				power(int nb, int pow);

unsigned int	valeur_chaine(char *nbr, char *base_from, int *minus)
{
	unsigned int	nb;
	int				start;
	int				i;
	int				base;
	int				pow;

	pow = 0;
	base = 0;
	while (base_from[base] != '\0')
		base++;
	start = debut_nb(nbr, minus);
	i = size_checker(nbr, base_from, start);
	nb = 0;
	while (i > 0)
	{
		nb = nb + (value_of(nbr[start + i - 1], base_from) * power(base, pow));
		i--;
		pow++;
	}
	return (nb);
}

char			*minus_tab(char *tab)
{
	char	*minustab;
	int		i;
	int		x;

	i = 1;
	x = 0;
	while (tab[x] != '\0')
		x++;
	minustab = malloc(sizeof(char) * (x + 2));
	minustab[0] = '-';
	while (tab[i - 1] != '\0')
	{
		minustab[i] = tab[i - 1];
		i++;
	}
	minustab[i] = '\0';
	return (minustab);
}

char			*fill_new_tab(unsigned int nb, char *base_to, int minus, int i)
{
	unsigned int	cp;
	unsigned int	nbe;
	char			*tab;

	cp = 0;
	while (base_to[cp] != '\0')
		cp++;
	nbe = nb;
	while (nbe > cp - 1)
	{
		nbe = nbe / cp;
		i++;
	}
	tab = malloc(sizeof(char) * (i + 1));
	while (i > 0)
	{
		tab[i] = base_to[nb % cp];
		nb = nb / cp;
		i--;
	}
	tab[i] = base_to[nb % cp];
	if (minus % 2 == 1 && nb != 0)
		return (minus_tab(tab));
	return (tab);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				start;
	int				minus;
	unsigned int	nb;

	if (not_correct(base_from))
		return (0);
	if (not_correct(base_to))
		return (0);
	start = debut_nb(nbr, &minus);
	nb = valeur_chaine(nbr, base_from, &minus);
	return (fill_new_tab(nb, base_to, minus, 0));
}

int				main(int argc, char **argv)
{
	char *oui;

	argc = 0;
	oui = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s\n", oui);
	return (1);
}
