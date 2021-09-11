/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:30:01 by mbuchet           #+#    #+#             */
/*   Updated: 2021/09/11 17:31:10 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar(nb);
	}
	else if (nb > 0 && nb <= 9 || nb == 0)
	{
		ft_putchar(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
		ft_putchar(nb);
	}
}

// int	main(void)
// {
// 	ft_putnbr(42);
// 	return (0);
// }
