/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 10:19:22 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/06 10:19:24 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, ",", 1);
}

void	ft_mod(int e, int f)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = e % 10;
	c = 0;
	d = f % 10;
	if (e > 9)
	{
		a = (e - b) / 10;
	}
	if (f > 9)
	{
		c = (f - d) / 10;
	}
	ft_putint(a + 48, b + 48, c + 48, d + 48);
}

void	ft_print_comb2(void)
{
	int	e;
	int	f;

	e = 0;
	while (e <= 98)
	{
		f = e + 1;
		while (f <= 99)
		{	
			ft_mod(e, f);
			f++;
		}
		e++;
	}
}
