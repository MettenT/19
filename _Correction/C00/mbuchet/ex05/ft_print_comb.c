/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:29:55 by mbuchet           #+#    #+#             */
/*   Updated: 2021/09/11 17:29:55 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	write_nb(int i, int j, int k)
{
	char	tab[4];

	tab[0] = i + '0';
	tab[1] = j + '0';
	tab[2] = k + '0';
	tab[3] = ',';
	write(1, &tab, 4);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 2;
	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				write_nb(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
