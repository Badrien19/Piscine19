/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:38:57 by badrien           #+#    #+#             */
/*   Updated: 2019/07/10 17:41:18 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int        ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int    i;

	i = 0;
	while (s1[i] == s2[i] && i < n && s1[i] != '\0')
		i++;
	if (s1[i] != s2[i] && i < n)
		return (s1[i] - s2[i]);
	return (0);
}
int main() {

	char a[]="testa";
	char b[]="test";
	int c;
	int d;

	c = ft_strncmp(a,b,10);
	d = strncmp(a,b,10);

	printf("%d doit etre = a %d",c,d);

	return 0;
}
