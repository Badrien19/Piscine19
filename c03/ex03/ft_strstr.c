/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 14:09:18 by badrien           #+#    #+#             */
/*   Updated: 2019/07/09 17:45:19 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	while (to_find[y] != '\0')
		y++;
	if (y == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x])
		{
			x++;
			if (x == y)
				return (&str[i]);
		}
		x = 0;
		i++;
	}
	return (0);
}
