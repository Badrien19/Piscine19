/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpogorz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:12:41 by anpogorz          #+#    #+#             */
/*   Updated: 2019/07/20 14:44:49 by anpogorz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int stock;
	int multipl;

	i = 0;
	stock = 0;
	multipl = 1;
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		stock = stock + (str[i] - 48) * multipl;
		multipl = 10 * multipl;
		i--;
	}
	return (stock);
}
