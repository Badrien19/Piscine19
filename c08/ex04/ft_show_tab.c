/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 20:50:15 by badrien           #+#    #+#             */
/*   Updated: 2019/07/21 16:29:42 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

int		is_po(int nb)
{
	int a;

	if (nb >= 0)
		a = 1;
	else
		a = 0;
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
	while (nb > 9)
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

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
