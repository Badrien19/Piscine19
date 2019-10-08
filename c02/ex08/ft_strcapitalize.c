/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 13:21:49 by badrien           #+#    #+#             */
/*   Updated: 2019/07/08 11:54:34 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase2(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i + 1] >= 'a' && str[i] <= 'z')
			{
				if (i == 0)
					str[i] = str[i] - 32;
				else if ((str[i - 1] >= 32 && str[i - 1] <= 47) ||
						(str[i - 1] >= 58 && str[i - 1] <= 64) ||
						(str[i - 1] >= 91 && str[i - 1] <= 96) ||
						(str[i - 1] >= 123 && str[i - 1] <= 127) || i == 0)
					str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (*str);
}
