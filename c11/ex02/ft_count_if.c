/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:23:03 by badrien           #+#    #+#             */
/*   Updated: 2019/07/24 17:28:01 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	length = length + 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
