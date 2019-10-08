/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_spaces.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpogorz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:48:59 by anpogorz          #+#    #+#             */
/*   Updated: 2019/07/20 17:39:34 by anpogorz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_string(char *str, int i, int l)
{
	int j;

	j = 0;
	while ((i + j) < (i + l))
	{
		str[j] = str[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_skip(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] > 32 && str[i] < 127)
		{
			str[j] = str[i];
			i++;
			j++;
		}
		if (str[i] == 32)
		{
			str[j] = str[i];
			j++;
		}
		while (str[i] == 32)
			i++;
	}
	str[j] = '\0';
	return (str);
}

int		ft_check(char *str)
{
	int i;
	int k;
	int j;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		k++;
		i++;
	}
	while (str[i] == ' ')
		i++;
	if (str[i] == 58)
	{
		j++;
		i++;
	}
	if (k > 0 && j > 0)
		return (1);
	return (0);
}

char	*ft_skip_spaces(char *str)
{
	int i;
	int j;
	int l;

	i = 0;
	l = 0;
	j = ft_check(str);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i] == ' ')
		i++;
	if (str[i] == 58)
		i++;
	while (str[i] == ' ')
		i++;
	while (str[i + l] > 31 && str[i + l] < 127)
		l++;
	if (j > 0 && l > 0)
	{
		str = ft_string(str, i, l);
		str = ft_skip(str);
		return (str);
	}
	return (0);
}
