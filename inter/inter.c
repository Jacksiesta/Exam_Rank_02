/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 22:26:49 by jherrald          #+#    #+#             */
/*   Updated: 2020/03/07 22:48:35 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int		x;
	int		y;
	char	tab[266];

	x = 0;
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	while (x < 266)
	{
		tab[x] = 0;
		x++;
	}
	x = 2;
	while (x >= 1)
	{
		y = 0;
		while (av[x][y])
		{
			if (x == 2 && tab[av[x][y]] == 0)
				tab[av[x][y]] = 1;
			else if (x == 1 && tab[av[x][y]] == 1)
			{
				tab[av[x][y]] = 3;
				write(1, &av[x][y], 1);
			}
			y++;
		}	
		x--;
	}
	write(1, "\n", 1);
	return (0);

}
