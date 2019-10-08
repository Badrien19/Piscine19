/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:34:49 by badrien           #+#    #+#             */
/*   Updated: 2019/07/09 14:06:10 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
