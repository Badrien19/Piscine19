/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 21:01:36 by badrien           #+#    #+#             */
/*   Updated: 2019/07/04 21:45:06 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(int a, int b, int c, int d)
{
	int		i;
	char	convnbr[4];

	convnbr[0] = a + '0';
	convnbr[1] = b + '0';
	convnbr[2] = c + '0';
	convnbr[3] = d + '0';
	i = 0;
	write(1, &convnbr[i], 1);
	i++;
	write(1, &convnbr[i], 1);
	i++;
	write(1, " ", 1);
	write(1, &convnbr[i], 1);
	i++;
	write(1, &convnbr[i], 1);
	if (a != 9 || b != 8)
	{
		write(1, ", ", 2);
	}
}

int		comp(int a, int b, int c, int d)
{
	int nbr1;
	int nbr2;

	nbr1 = a * 10 + b;
	nbr2 = c * 10 + d;
	if (nbr1 >= nbr2)
	{
		return (1);
	}
	return (0);
}

void	roll(int a, int b, int c, int d)
{
	while (++a <= 9)
	{
		while (++b <= 9)
		{
			while (++c <= 9)
			{
				while (++d <= 9)
				{
					if (comp(a, b, c, d) == 0)
					{
						putchar(a, b, c, d);
					}
				}
				d = -1;
			}
			c = -1;
		}
		b = -1;
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = -1;
	b = -1;
	c = -1;
	d = -1;
	roll(a, b, c, d);
}
