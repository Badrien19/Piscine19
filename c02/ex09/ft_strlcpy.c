/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 08:04:11 by badrien           #+#    #+#             */
/*   Updated: 2019/07/08 12:24:57 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int b;

	if (size == 0)
		return (0);
	i = 0;
	while (src[i] != '\0' && size > 1)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	b = i;
	while (size != 0)
	{
		dest[i] = '\0';
		size--;
		i++;
	}
	return (b);
}
