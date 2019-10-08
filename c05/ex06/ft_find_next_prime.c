/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 16:47:50 by badrien           #+#    #+#             */
/*   Updated: 2019/07/13 17:14:29 by badrien          ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb < 0)
		return (2);
	i = 0;
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
