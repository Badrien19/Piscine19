/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 11:04:08 by badrien           #+#    #+#             */
/*   Updated: 2019/07/06 11:04:52 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void print_line(char first, char filling, int col)
{
	//reste_col = col; // to not lose the col
	ft_putchar(first);// aff the first "o"
	col--;
	while(col > 1)
	{
		ft_putchar(filling);
		col--;
	}
	if(col == 1)
		ft_putchar(first);

}

void rush(int col, int line)
{
	//int reste_col;
	int max_line;

	max_line = line;

	if(col < 0 || line < 0)// variable is positive
		return;

	while(line != 0)// turn for each ligne
	{
		if(line == max_line )// only if its first or last line
			print_line('A', 'B', col);// FIN IF line first and last
		else if(line == 1)// So the line with |
			print_line('C', 'B', col);
		else
			print_line('B', ' ', col);		

		ft_putchar('\n');	
		line--;
	}
	return;
}
