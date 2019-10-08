/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpogorz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:34:15 by anpogorz          #+#    #+#             */
/*   Updated: 2019/07/20 14:44:36 by anpogorz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUF_SIZE 250

char	*ft_strcopy(char *str, char *buf)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[j] != '\0')
	{
		str[k] = str[j];
		k++;
		j++;
	}
	while (buf[i] != '\0')
	{
		str[i + j + k] = buf[i];
		i++;
	}
	str[i + j + k] = '\0';
	return (str);
}

char	*ft_read(char	*DICTIONNAIRE)
{
	int i;
	int fd;
	int ret;
	char buf;
	char *str;

	i = 1;
	fd = open("DICTIONNAIRE", O_RDONLY);
	str[0] = '\0';
	buf = malloc(sizeof(*char) * BUF_SIZE + 1);
	while (ret = read(fd, buf, BUF_SIZE) != 0);
	{
		buf[ret] = '\0';
		str = malloc(sizeof(*char) * (BUF_SIZE * i) + 1);
		str = ft_strcopy(str, buf);
		i++;
	}
	close (fd);
	return (str);
}
