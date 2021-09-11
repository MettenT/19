/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:29:58 by mbuchet           #+#    #+#             */
/*   Updated: 2021/09/11 17:29:58 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	write_nb(int i, int j)
{
	char	tab[8];

	tab[0] = (i / 10) + '0';
	tab[1] = (i % 10) + '0';
	tab[2] = ' ';
	tab[3] = (j / 10) + '0';
	tab[4] = (j % 10) + '0';
	tab[5] = ',';
	tab[6] = ' ';
	tab[7] = '\0';
	write(1, &tab, 10);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 99)
	{
		while (j < 99)
		{
			write_nb(i, j);
			++j;
		}
		write_nb(i, j);
		++i;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
