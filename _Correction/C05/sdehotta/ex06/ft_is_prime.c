/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdehotta <sdehotta@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 08:19:28 by sdehotta          #+#    #+#             */
/*   Updated: 2021/09/23 08:19:30 by sdehotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	p;

	p = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (p <= nb / p)
	{
		if (nb % p == 0)
			return (0);
		p++;
	}
	return (1);
}

#include <unistd.h>
#include <stdio.h>
int		main(void)
{
	printf("-10 = %d (0)\n", ft_is_prime(-10));
	printf("-1 = %d (0)\n", ft_is_prime(-1));
	printf(" 0 = %d (0)\n", ft_is_prime(0));
	printf(" 1 = %d (0)\n", ft_is_prime(1));
	printf(" 2 = %d (1)\n", ft_is_prime(2));
	printf(" 3 = %d (1)\n", ft_is_prime(3));
	printf(" 4 = %d (0)\n", ft_is_prime(4));
	printf(" 5 = %d (1)\n", ft_is_prime(5));
	printf(" 6 = %d (0)\n", ft_is_prime(6));
	printf(" 7 = %d (1)\n", ft_is_prime(7));
	printf(" 8 = %d (0)\n", ft_is_prime(8));
	printf(" 9 = %d (0)\n", ft_is_prime(9));
	printf(" 10 = %d (0)\n", ft_is_prime(10));
	printf(" 11 = %d (1)\n", ft_is_prime(11));
}