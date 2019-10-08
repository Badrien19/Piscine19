/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 21:06:42 by badrien           #+#    #+#             */
/*   Updated: 2019/07/04 21:43:57 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_po(int nb)
{
	int a;

	if (nb >= 0)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}

void	ft_putnbr(int nb)
{
	int		ispo;
	char	resul[10];
	int		i;

	i = 0;
	ispo = is_po(nb);
	if (ispo == 0)
		nb = nb * -1;
	while (nb > 10)
	{
		resul[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	resul[i] = nb + '0';
	if (ispo == 0)
	{
		write(1, "-", 1);
	}
	while (i >= 0)
	{
		write(1, &resul[i], 1);
		i--;
	}
}
