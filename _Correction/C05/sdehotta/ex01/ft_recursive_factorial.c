/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdehotta <sdehotta@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 08:17:27 by sdehotta          #+#    #+#             */
/*   Updated: 2021/09/23 08:17:30 by sdehotta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}

// #include <unistd.h>
// #include <stdio.h>
// int		main(void)
// {
// 	printf("-6 = %d (0)\n", ft_recursive_factorial(-6));
// 	printf(" 0 = %d (1)\n", ft_recursive_factorial(0));
// 	printf(" 1 = %d (1)\n", ft_recursive_factorial(1));
// 	printf(" 2 = %d (2)\n", ft_recursive_factorial(2));
// 	printf(" 3 = %d (6)\n", ft_recursive_factorial(3));
// 	printf(" 4 = %d (24)\n", ft_recursive_factorial(4));
// }