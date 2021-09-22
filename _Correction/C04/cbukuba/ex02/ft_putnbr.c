/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>         +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 12:24:37 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/13 10:47:25 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1 );
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10 );
		ft_putnbr(nb % 10 );
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	main(void)
{
	ft_putnbr(2147483647);
}