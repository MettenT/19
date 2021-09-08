/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 08:34:36 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/08 08:34:37 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void    ft_print_combn(int n)
{
    int i;
	int r;
	
	r = n;

    i = 0;
    while  (i <= 10 - n)
    {
        ft_putchar(i + 48);
        n++;
        ft_print_combn(n);
        ft_putchar(',');
		ft_putchar(' ');
		n = r;
        i++;
    }
}

int		main(void)
{
	ft_print_combn(5);
	return (0);
}