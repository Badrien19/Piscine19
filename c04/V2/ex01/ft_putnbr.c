/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 08:33:51 by badrien           #+#    #+#             */
/*   Updated: 2019/07/10 10:25:43 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			c[10];
	int				i;
	unsigned int	nbe;

	i = 0;
	if (nb < 0)
		nbe = nb * -1;
	else
		nbe = nb;
	while (nbe > 9)
	{
		c[i] = (nbe % 10) + '0';
		nbe = nbe / 10;
		i++;
	}
	c[i] = (nbe % 10) + '0';
	if (nb < 0)
		write(1, "-", 1);
	while (i > 0)
	{
		write(1, &c[i], 1);
		i--;
	}
	write(1, &c[i], 1);
}
