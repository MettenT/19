/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:06:11 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/06 12:06:12 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	else if (nb < 10)
	{
		ft_putchar(nb + 48);
		return;
	}
	else
	{
		ft_putnbr(nb / 10);		
	}
	ft_putnbr(nb % 10);
}

int	main()
{
	ft_putnbr(-50);
}