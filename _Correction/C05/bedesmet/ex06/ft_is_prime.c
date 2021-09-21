/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:29:57 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/14 11:29:59 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	sqrt;

	sqrt = 2;
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	while (sqrt * sqrt <= nb)
	{
		if ((nb % sqrt) == 0)
			return (0);
		sqrt++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	int i = 2;
	while (i < 100)
	{
		if (ft_is_prime(i))
			printf("%d\n", i);
		i++;
	}
}