/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:01:39 by badrien           #+#    #+#             */
/*   Updated: 2019/07/13 14:16:42 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power >= 1)
		return (nb = nb * (ft_recursive_power(nb, power - 1)));
	if (power < 0)
		return (nb = (ft_recursive_power(nb, power + 1)) / nb);
	return (1);
}
