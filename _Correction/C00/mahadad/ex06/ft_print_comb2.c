/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:40:04 by mahadad           #+#    #+#             */
/*   Updated: 2021/09/11 17:40:05 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	string_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/**
 *  0 1    2    3 4 5 6  7
 * |x|x|`space`|y|y| |,|\0|
 * 
**/

void	print_num(int x, int y)
{
	char	tab[8];

	tab[0] = (x / 10) + '0';
	tab[1] = (x % 10) + '0';
	tab[2] = ' ';
	tab[3] = (y / 10) + '0';
	tab[4] = (y % 10) + '0';
	tab[5] = ',';
	tab[6] = ' ';
	tab[7] = '\0';
	if (x == 98 && y == 99)
	{
		tab[5] = '\0';
		tab[6] = '\0';
	}
	write(1, &tab, string_len(tab));
}

/**
 * 
 * |xx|yy|
 * 
 * x will be never 99
**/

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y < 100)
		{
			print_num(x, y);
			y++;
		}
		x++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }

int main()
{
	ft_print_comb2();
}
