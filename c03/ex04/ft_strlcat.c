/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:11:27 by badrien           #+#    #+#             */
/*   Updated: 2019/07/09 22:22:22 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int y;
	unsigned int x;
	unsigned int z;
	i = 0;
	x = 0;
	y = 0;
	z = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0')
		y++;
	if (i + y > size)
		return(i);
	if (size == 0 )
		return (y);
	z = i+y;
	while (src[x] != '\0' && x < size)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (z);
}

int    main(void)
{
	char s1[20] = "hello";
	char s2[] = "bye no no no";
	unsigned int l1 = ft_strlcat(s1, s2, 9);
	printf("ft_lcat s1 = %s, s2 = %s, total len = %u", s1, s2, l1);
	printf("\n");

	char s3[20] = "hello";
	char s4[] = "bye no no no";
	unsigned long l2 = strlcat(s3, s4, 9);
	printf("   lcat s3 = %s, s4 = %s, total len = %lu", s3, s4, l2);
	return (0);
}*/
