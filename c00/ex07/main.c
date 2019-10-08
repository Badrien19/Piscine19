/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 10:12:45 by badrien           #+#    #+#             */
/*   Updated: 2019/07/07 16:36:53 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include"ex00/ft_strcpy.c"
#include"ex01/ft_strncpy.c"
#include"ex02/ft_str_is_alpha.c"
#include"ex03/ft_str_is_numeric.c"
#include"ex04/ft_str_is_lowercase.c"
#include"ex05/ft_str_is_uppercase.c"
#include"ex06/ft_str_is_printable.c"
#include"ex07/ft_strupcase.c"
#include"ex08/ft_strlowcase.c"
#include"ex09/ft_strcapitalize.c"

int main(void)
{
	char a[5]="1234";
	char b[5]="0a1A";
	char c[5]="test";
	char d[5]="TEST";
	char e[5]="TeSt";
	char f[5]="Osef";
	char g[5]="\0";
	char z[32]="cECI$EsT un TEST A d de2de 3re";

	int x;
	int y;

	//--- EX00
	ft_strcpy(f, a);
	write(1, f, 5);
	printf("\n");
	ft_strcpy(f, b);
	write(1, f, 5);
	printf("\n");

	//--- EX01

	ft_strncpy(f, a, 5);
	write(1, f, 5);
	printf("\n");
	ft_strncpy(f, a, 0);
	write(1, f, 5);
	printf("\n");

	//--- EX02
	x=ft_str_is_alpha(a);
	printf("%d \n",x);
	x=ft_str_is_alpha(b);
	printf("%d \n",x);
	x=ft_str_is_alpha(c);
	printf("%d \n",x);
	x=ft_str_is_alpha(e);
	printf("%d \n",x);


	//--- ex03
	x=ft_str_is_numeric(a);
	printf("%d \n",x);
	x=ft_str_is_numeric(b);
	printf("%d \n",x);

	//---- ex06

	f[0]=25;
	x=ft_str_is_printable(f);
	printf("ex 6; %d \n",x);

	//--- ex08
	printf("\n");

	write(1, e, 5);
	ft_strlowcase(e);
	write(1, e, 5);

	write(1, c, 5);
	ft_strlowcase(c);
	write(1, c, 5);

	//--- ex07
	printf("\n");
	write(1, e, 5);
	ft_strupcase(e);
	write(1, e, 5);

	write(1, d, 5);
	ft_strupcase(d);
	write(1, d, 5);

	//--- ex09
	
	ft_strcapitalize(z);

	write(1, z, 32);



}
