/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:45:28 by badrien           #+#    #+#             */
/*   Updated: 2019/07/24 20:31:24 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		debut_nb(char *str, int *moins)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			(*moins)++;
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int		i;
	long	nb;
	int		moins;
	int		x;
	long	z;

	z = 1;
	x = 0;
	moins = 0;
	nb = 0;
	i = debut_nb(str, &moins);
	while ((str[i + x] >= '0' && str[i + x] <= '9') && str[i + x] != '\0')
		x++;
	while (x > 0)
	{
		nb = nb + ((str[i + x - 1] - '0') * z);
		z = z * 10;
		x--;
	}
	i = nb * (moins % 2 == 1 ? -1 : 1);
	return (i);
}

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
	write(1, "\n", 1);
}

int		calculate(int nb1, char o, int nb2)
{
	int resultat;

	resultat = 0;
	if (o == '+')
		resultat = nb1 + nb2;
	if (o == '-')
		resultat = nb1 - nb2;
	if (o == '*')
		resultat = nb1 * nb2;
	if (o == '/')
		resultat = nb1 / nb2;
	if (o == '%')
		resultat = nb1 % nb2;
	return (resultat);
}

int		main(int argc, char **argv)
{
	int (*ptr)(char *);

	ptr = &ft_atoi;
	if (argc != 4)
		return (1);
	if ((*ptr)(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		write(1, "Stop : ", 7);
		if (argv[2][0] == '/')
			write(1, "division by zero\n", 17);
		if (argv[2][0] == '%')
			write(1, "modulo by zero\n", 15);
	}
	else
		ft_putnbr(calculate((*ptr)(argv[1]), argv[2][0], (*ptr)(argv[3])));
	return (0);
}
