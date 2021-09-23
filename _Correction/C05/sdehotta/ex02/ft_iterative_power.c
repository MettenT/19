/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdehotta <sdehotta@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 08:17:39 by sdehotta          #+#    #+#             */
/*   Updated: 2021/09/23 08:17:41 by sdehotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

#include <unistd.h>
#include <stdio.h>
int		main(void)
{
	printf("-3 ^-1 = %d (0)\n", ft_iterative_power(-3, -1));
	printf("-3 ^ 0 = %d (1)\n", ft_iterative_power(-3, 0));
	printf("-3 ^ 1 = %d (-3)\n", ft_iterative_power(-3, 1));
	printf("-3 ^ 2 = %d (9)\n", ft_iterative_power(-3, 2));
	printf("-3 ^ 3 = %d (-27)\n", ft_iterative_power(-3, 3));
	printf(" 0 ^-1 = %d (0)\n", ft_iterative_power(0, -1));
	printf(" 0 ^ 0 = %d (1)\n", ft_iterative_power(0, 0));
	printf(" 0 ^ 2 = %d (0)\n", ft_iterative_power(0, 2));
	printf(" 4 ^-1 = %d (0)\n", ft_iterative_power(4, -1));
	printf(" 4 ^ 0 = %d (1)\n", ft_iterative_power(4, 0));
	printf(" 4 ^ 1 = %d (4)\n", ft_iterative_power(4, 1));
	printf(" 4 ^ 2 = %d (16)\n", ft_iterative_power(4, 2));
	printf(" 4 ^ 3 = %d (64)\n", ft_iterative_power(4, 3));
}