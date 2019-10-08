/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 13:39:43 by badrien           #+#    #+#             */
/*   Updated: 2019/07/13 17:11:27 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int diviseur;

	if (nb < 0)
		return (0);
	diviseur = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while ((nb / diviseur) >= diviseur)
	{
		if (nb % diviseur == 0)
			return (0);
		diviseur++;
	}
	return (1);
}
