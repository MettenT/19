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

void ft_putint(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, ",", 1);
}

void ft_print_comb2() 
{
	int e = 0;
	int f;

	while(e <= 98)
	{
		f = e + 1;
		while( f <= 99)
		{	
			int a = 0;
			int b = e % 10;
			int c = 0;
			int d = f % 10;

			if(e > 9)
			{
				a = (e - b)/10;
			}			
			
			if(f > 9)
			{
				c = (f - d)/10;
			}
			
			a+= 48;
			b+= 48;
			c+= 48;
			d+= 48;
											
			ft_putint(a, b, c, d);
			f++;
		}
	e++;
	}
}

int main()
{
	ft_print_comb2();
}