/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:28:22 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/14 19:28:23 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_find_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

// #include <unistd.h>
// #include <stdio.h>
// int		main(void)
// {
// 	printf("-10 = %d (2)\n", ft_find_next_prime(-10));
// 	printf(" 0 = %d (2)\n", ft_find_next_prime(0));
// 	printf(" 1 = %d (2)\n", ft_find_next_prime(1));
// 	printf(" 2 = %d (2)\n", ft_find_next_prime(2));
// 	printf(" 3 = %d (3)\n", ft_find_next_prime(3));
// 	printf(" 4 = %d (5)\n", ft_find_next_prime(4));
// 	printf(" 5 = %d (5)\n", ft_find_next_prime(5));
// 	printf(" 6 = %d (7)\n", ft_find_next_prime(6));
// 	printf(" 7 = %d (7)\n", ft_find_next_prime(7));
// 	printf(" 8 = %d (11)\n", ft_find_next_prime(8));
// 	printf(" 9 = %d (11)\n", ft_find_next_prime(9));
// 	printf(" 10 = %d (11)\n", ft_find_next_prime(10));
// 	printf(" 11 = %d (11)\n", ft_find_next_prime(11));
// 	printf(" 2147483647 = %d (2147483647)\n", ft_find_next_prime(2147483647));
// }