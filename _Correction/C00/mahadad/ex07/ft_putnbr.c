/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:33:35 by mahadad           #+#    #+#             */
/*   Updated: 2021/09/11 17:38:28 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Max & Min `int`
 * tab[12] | 7 | 4 | 6 | 3 | 8 | 4 | 7 | 4 | 1 | 2 | \0|   |
 * tab[12] | 8 | 4 | 6 | 3 | 8 | 4 | 7 | 4 | 1 | 2 | - | \0|
 * 
 * 
**/

#include <unistd.h>

int	string_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	print_rev(char *str)
{
	int	i;

	i = (string_len(str) - 1);
	while (i >= 0)
	{
		write(1, &(str[i]), 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;
	char			print[12];
	int				neg;
	int				i;

	i = 0;
	neg = 0;
	if (nb < 0)
	{
		nbr = (unsigned)nb * -1;
		neg++;
	}
	else
		nbr = (unsigned)nb;
	while (nbr > 0)
	{
		print[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (neg)
		print[i++] = '-';
	print[i] = '\0';
	print_rev(print);
}

// #include <stdio.h>
// #include <limits.h>
// int	main()
// {
// 	write(1, "\n|", 2);
// 	ft_putnbr(INT_MIN);
// 	write(1, "|\n|", 3);
// 	ft_putnbr(0);
// 	write(1, "|\n|", 3);
// 	ft_putnbr(INT_MAX);
// 	write(1, "|", 1);
// 	return(0);
// }

int	main()
{
	ft_putnbr(0);
}