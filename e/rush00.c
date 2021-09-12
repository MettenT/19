/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 08:17:36 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/12 08:17:38 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print(int line, int column, int max_l, int max_c)
{
	if (line == 0 || line == max_l) //si on est a la premiere line affiche moi:
	{
		if (column == 0 || column == max_c) // un A si on est sur la premiere column (coin gauche)
			ft_putchar('o');
		else
			ft_putchar('-'); // un B si on est entre les deux
	}
	else
	{
		if (column == 0 || column == max_c) //si on est sur une autre line que la premiere et la derniere affiche moi :
			ft_putchar('|'); // un B si on est sur la premiere ou la derniere column 
		else
			ft_putchar(' '); // un espace si on est sur une column et une line du milieu 
	}
}

void	rush(int x, int y)
{
	int	line; //creation entier desigant les lines 
	int	column; //creation entier desigant les columns 

	line = 0;
	while (line < x) //tant que le numero de la line est inferieur a la largeur y
	{
		column = 0;
		while (column < y) //tant que le numero de la column est inferieur a la longueur x
		{
			ft_print(line, column, x - 1, y - 1);
			column++; //incrementation des abscisses pour afficher les valeurs une par une
		}
		ft_putchar('\n'); //puis une fois qu'on a fait toutes une line column par column on passe a la line suivante 
		line++;
	}
}

int main(void)
{
	rush(5,3);
	rush(1,5);
	rush(5,1);
	rush(1,1);
	rush(14,8);
	rush(0,0);
	rush(2,2);
	rush(69,42);
}