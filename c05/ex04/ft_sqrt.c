/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:57:14 by badrien           #+#    #+#             */
/*   Updated: 2019/07/13 17:05:36 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int				i;
	unsigned int	j;
	unsigned int	nbe;

	if (nb == 1)
		return (1);
	if (nb < 1)
		return (0);
	nbe = nb;
	i = 0;
	j = 1;
	while (j < nbe)
	{
		j = i * i;
		i++;
		if (i == 46342)
			return (0);
	}
	if (nbe == j)
		return (i - 1);
	else
		return (0);
}
