/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:34:17 by badrien           #+#    #+#             */
/*   Updated: 2019/07/16 11:27:08 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int			*ret;
	int			i;
	long int	taille;

	ret = 0;
	i = 1;
	if (min >= max)
		return (ret);
	taille = max - min;
	ret = malloc(sizeof(int) * taille);
	if (ret == NULL)
		return (0);
	while (taille > 0)
	{
		ret[taille - 1] = max - i;
		taille--;
		i++;
	}
	return (ret);
}
