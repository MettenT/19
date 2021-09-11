/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:05:26 by mahadad           #+#    #+#             */
/*   Updated: 2021/09/06 11:30:14 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * |x|y|z| will be the 3 digit.
 * We will be `012` at the begining.
 * 
 * THE LOGIC
 *    @ the fist will we check if the digit `x` is <= 7 because we know the
 *    max is 789.
 *
 **/

void	print_num(int x, int y, int z)
{
	char	tab[4];

	tab[3] = '\0';
	tab[0] = x + '0';
	tab[1] = y + '0';
	tab[2] = z + '0';
	write(1, &tab, 3);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 1;
	z = y + 1;
	while (x <= 7)
	{
		while (y <= 8)
		{
			while (z <= 9)
			{
				print_num(x, y, z);
				if (x != 7)
					write(1, ", ", 2);
				z++;
			}
			y++;
			z = y + 1;
		}
		z = y + 1;
		y = x + 1;
		x++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
