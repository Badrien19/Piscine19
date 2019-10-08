/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:12:06 by badrien           #+#    #+#             */
/*   Updated: 2019/07/25 14:35:56 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		power(int nb, int pow)
{
	if (pow == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (pow == 1)
		return (nb);
	if (pow >= 1)
		return (nb = nb * (power(nb, pow - 1)));
	if (pow < 0)
		return (nb = (power(nb, pow + 1)) / nb);
	return (1);
}

int		not_correct(char *base)
{
	int i;
	int x;
	int y;

	x = 1;
	i = 0;
	y = 0;
	while (base[y] != '\0')
		y++;
	if (y <= 1)
		return (1);
	while (base[i] != '\0')
	{
		while (base[x] != '\0')
		{
			if (base[i] == base[x])
				return (1);
			x++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
		x = i + 1;
	}
	return (0);
}

int		debut_nb(char *str, int *minus)
{
	int i;

	*minus = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			(*minus)++;
		i++;
	}
	return (i);
}

int		size_checker(char *nbr, char *base_from, int start)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (nbr[start + j] != '\0')
	{
		while (nbr[start + j] != base_from[i])
		{
			if (base_from[i] == '\0')
				return (j);
			i++;
		}
		j++;
		i = 0;
	}
	return (j);
}

int		value_of(char c, char *base_from)
{
	int i;

	i = 0;
	while (c != base_from[i])
	{
		if (base_from[i] == '\0')
			return (0);
		i++;
	}
	return (i);
}
