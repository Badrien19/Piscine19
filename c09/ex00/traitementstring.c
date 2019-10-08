/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traitementstring.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <badrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:33:54 by badrien           #+#    #+#             */
/*   Updated: 2019/07/21 10:49:00 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct    s_dico_value
{
	int value;
	char *string;
}                 t_dico_value;

int struct_count(char *string)
{
    int i;
    int c_retour_chariot;
    int chaine_ok;

    i = 0;
    c_retour_chariot = 0;
    chaine_ok = 1;
    while(string[i] != '\0')
    {
        if(string[i] == '\n')
        {
            if(chaine_ok == 0)
            {
                c_retour_chariot++;
                chaine_ok = 1;
            }
        }
        else
          chaine_ok = 0;
        i++;
    }
    if(chaine_ok == 0)
        c_retour_chariot++;
    printf("%d",c_retour_chariot);
    return (c_retour_chariot);
}

int get_value(char *str,int i)
{
	int x;
	int nb;
	int y;

	x = 1;
	nb = 0;
	y = 0;

	while (str[i + y] >= '0' && str[i + y] <= '9')
		y++;
	if(y == 0)
		return (-1);
	while(y > 0)
	{
		nb = nb + ((str[i + (y - 1)] - '0') * x);
		x = x * 10;
		y--;
	}
	return (nb);
}

char *get_string(char *str, int *i)
{
	char *tmp;
	int y;

	y = 0;
	while (str[*i + y] != '\n' && str[*i + y] != '\0')
		y++;
	tmp = malloc(sizeof(char) * (y + 1));
	y = 0;
	while (str[*i + y] != '\n' && str[*i + y] != '\0')
	{
		tmp[y] = str[*i + y];
		y++;
	}
	*i = *i + y; 
	tmp[y] = '\0';
	return (tmp);
}

struct s_dico_value *create_struc(char *string)
{
	int i;
	int x;
	int c_struc;
	t_dico_value *tab_struc;

	i = 0;
	x = 0;

	c_struc = struct_count(string);

	printf("nombre de struc: %d\n", c_struc);
	
	tab_struc = malloc(sizeof(t_dico_value) * (c_struc + 1));

	printf("oui le malloc \n");
	fflush(stdout);

	while (c_struc > 0)
	{
		printf("C_struc = %d \n", c_struc);
		printf("x = %d \n", x);
		fflush(stdout);
		tab_struc[x].value = get_value(string, i);
		tab_struc[x].string = get_string(string, &i);
		while(string[i] == '\n')
			i++;
		x++;
		printf("x = %d \n", x);
		fflush(stdout);
		c_struc--;
	}
	printf("En fin de boucle x = %d \n",x);
	tab_struc[x].string = NULL;
	return (tab_struc);
}


int  main (void)
{
	t_dico_value *p;

	char a[]="1 : un\n2 : deux\n3 : trois \n4 : quatre\n5 : cinq\n30 : trente ";

	p = create_struc(a);

	printf("%d | %s\n", p[0].value, p[0].string);
	printf("%d | %s\n", p[1].value, p[1].string);
	printf("%d | %s\n", p[2].value, p[2].string);
	printf("%d | %s\n", p[3].value, p[3].string);
	printf("%d | %s\n", p[4].value, p[4].string);
	printf("%d | %s\n", p[5].value, p[5].string);
	printf("%d | %s\n", p[6].value, p[6].string);


}
