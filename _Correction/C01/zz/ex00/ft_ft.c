/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:26:13 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/11 16:26:13 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 void	ft_putchar(char c)
 {
 	write(1, &c, 1);
 }

 void	ft_putnbr(int nbr)
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

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

 int main ()
 {
 	int testnbr;
 	testnbr = 2;
 	ft_ft(&testnbr);
 	ft_putnbr(testnbr);
 }