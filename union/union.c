/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 20:58:02 by jherrald          #+#    #+#             */
/*   Updated: 2020/03/07 22:11:51 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// ret 1 -> char exists || ret 0 -> char doesn't exist

int		search_str(char c, char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		if (str[x] == c)
			return (1);
		x++;
	}
	return (0);
}

int 	main(int ac, char **av)
{
	int 	x;
	int		y;
	char	tab[36];

	x = 0; // char numb x
	y = 0; // argm numb y
	while (x < 36)
	{
		tab[x] = 0;
		x++;
	}
	x = 1;
	if (ac != 2)
	{
		while (y < 2)
		{
			y = 0;
			while (av[x][y])
			{
				if (tab[(unsigned char)av[x][y]] == 1)
				{
					y++;
				}
				else
				{
					write(1, &av[x][y], 1);
					//ft_putchar(av[x][y]);
					tab[(unsigned char)av[x][y]] = 1;
					y++;
				}
			}
			x++;
		}
	}
	ft_putchar('\n');	
	return (0);
}
