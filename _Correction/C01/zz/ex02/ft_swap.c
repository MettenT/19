/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:25:45 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/11 16:25:45 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 void ft_putchar(char c)
{
 	write(1, &c, 1);
 }

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main()
{
	int a = 1;
	int b = 2;

	write(1, "a=", 2);
	ft_putchar(a + '0');
	write(1, " et b=", 6);
	ft_putchar(b + '0');

	ft_swap(&a, &b);

	write(1, "\n\n", 2);
	write(1, "a=", 2);
	ft_putchar(a + '0');
	write(1, " et b=", 6);
	ft_putchar(b + '0');
}