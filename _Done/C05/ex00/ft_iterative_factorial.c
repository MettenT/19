/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:38:58 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/14 16:38:59 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 1)
	{
		result *= nb--;
	}
	return (result);
}

// #include <unistd.h>
// #include <stdio.h>
// int		main(void)
// {
// 	printf("-6 = %d (0)\n", ft_iterative_factorial(-6));
// 	printf(" 0 = %d (1)\n", ft_iterative_factorial(0));
// 	printf(" 1 = %d (1)\n", ft_iterative_factorial(1));
// 	printf(" 2 = %d (2)\n", ft_iterative_factorial(2));
// 	printf(" 3 = %d (6)\n", ft_iterative_factorial(3));
// 	printf(" 4 = %d (24)\n", ft_iterative_factorial(4));
// }