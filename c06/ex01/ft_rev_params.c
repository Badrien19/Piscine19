/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badrien <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 09:13:01 by badrien           #+#    #+#             */
/*   Updated: 2019/07/12 09:14:08 by badrien          ###   ########.fr       */
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
		write(1, &argv[argc - 1][0], i);
		write(1, "\n", 1);
		main(argc - 1, argv);
	}
}
