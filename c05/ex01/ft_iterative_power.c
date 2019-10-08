/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 08:48:09 by badrien           #+#    #+#             */
/*   Updated: 2019/07/13 14:11:57 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	if (power == 0)
		return (1);
	if (power < 1)
		return (0);
	if (nb == 0)
		return (0);
	while (power >= 1)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
