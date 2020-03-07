/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 20:58:02 by jherrald          #+#    #+#             */
/*   Updated: 2020/03/07 22:24:25 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	main(int ac, char **av)
{
	int		x;
	int 	y;
	char	tab[266];

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	x = 0;
	while (x < 266)
	{
		tab[x] = 0;
		x++;
	}
	x = 1;
	while (x <= 2)
	{
		y = 0;
		while (av[x][y])
		{
			if (tab[(unsigned char)av[x][y]] == 0)
			{
				write(1, &av[x][y], 1);
				tab[(unsigned char)av[x][y]] = 1;
			}
			y++;
		}
		x++;
	}
	write(1, "\n", 1);
	return (0);
}
