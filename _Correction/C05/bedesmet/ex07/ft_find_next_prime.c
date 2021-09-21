/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:30:17 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/14 11:30:19 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	while (!(is_prime(nb)))
		nb++;
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(-10));
}