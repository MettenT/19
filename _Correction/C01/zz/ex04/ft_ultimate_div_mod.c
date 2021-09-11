/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:25:27 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/11 16:25:27 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void ft_putnbr (int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}

	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else 
	{
		ft_putchar(nbr + '0');
	}
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		c;
	int		d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

int main ()
{
	int a;
	int b;

	a = 40;
	b = 0;

	ft_ultimate_div_mod(&a, &b);
	write(1 , "a = ", 4);
	ft_putnbr(a);
	write(1 , "\n", 1);
	write(1 , "b = ", 4);  
	ft_putnbr(b);
}
