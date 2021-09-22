/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:59:03 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/14 17:59:04 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}	
	while (i * i < nb)
	{
		i++;
		if (i > 46340)
		{
			return (0);
		}			
	}
	if (i * i == nb)
	{
		return (i);
	}		
	return (0);
}

// #include <unistd.h>
// #include <stdio.h>
// int		main(void)
// {
// 	printf("-10 = %d (0)\n", ft_sqrt(-10));
// 	printf("-1 = %d (0)\n", ft_sqrt(-1));
// 	printf(" 0 = %d (0)\n", ft_sqrt(0));
// 	printf(" 1 = %d (1)\n", ft_sqrt(1));
// 	printf(" 2 = %d (0)\n", ft_sqrt(2));
// 	printf(" 3 = %d (0)\n", ft_sqrt(3));
// 	printf(" 4 = %d (2)\n", ft_sqrt(4));
// 	printf(" 9 = %d (3)\n", ft_sqrt(9));
// 	printf(" 16 = %d (4)\n", ft_sqrt(16));
// 	printf(" 25 = %d (5)\n", ft_sqrt(25));
// }