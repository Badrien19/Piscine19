/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 08:46:43 by badrien           #+#    #+#             */
/*   Updated: 2019/07/12 09:11:30 by badrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
		return (0);
	else
	{
		while (argv[argc - 1][i] != '\0')
			i++;
		main(argc - 1, argv);
		write(1, &argv[argc - 1][0], i);
		write(1, "\n", 1);
	}
}
