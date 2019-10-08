/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 21:09:28 by badrien           #+#    #+#             */
/*   Updated: 2019/07/10 09:39:27 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void affichage(int tail_base,long nb, char *base, int *tab)
{
	int i;
	i=0;
	while( nb > tail_base)
	{
		tab[i] = nb % tail_base;
		nb = nb / tail_base;
		i++;
	}
	tab[i]=nb;
	while( i-- >= 0)
		write(1, &base[tab[i+1]], 1);
}

int is_correct(char *base)
{
	int i=0;
	int x=1;
	while (base[i] != '\0')
	{
		while (base[x] != '\0')
		{
			if (base[i]==base[x])
				return(1);
			x++;
		}
		if(base[i] == '+' || base[i] == '-')
			return(1);
		i++;
		x = i + 1;
	}
	return (0);
}

void ft_putnbr_base(int nbr, char *base)
{
	int i;
	int tail_base;
	int tab[10];
	long nb;

	nb = nbr;
	i = 0;
	tail_base = 0;
	while(base[i++] != '\0')
		tail_base++;
	if(tail_base < 1)
		return ;
	if(is_correct(base))
		return ;
	if(nbr < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	affichage(tail_base,nb, base, tab);
}

int main(void)
{
	char a[]="0123+56789";
	int b=-2147483648;
	ft_putnbr_base(b,a);
	return 0;
}
