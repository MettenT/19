/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:25:36 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/11 16:25:36 by hbourgeo         ###   ########.fr       */
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
		ft_putchar(nbr + 48);
	}
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main ()
{
	int a;
	int b;
	int div;
	int mod;

	a = -40;
	b = 25;

	ft_div_mod(a, b, &div, &mod);
	write(1 , "div = ", 6);
	ft_putnbr(div);
	write(1 , "\n", 1);
	write(1 , "mod = ", 6);  
	ft_putnbr(mod);
}