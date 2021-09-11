/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:10:14 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/09 20:10:27 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b ;
	*mod = a % b ;
}


int	main(void)
{
	int	a ;
	int	b ;
	int	mod;
	int	div;

	a = 10;
	b = 3;
	ft_div_mod(10, 3, &div, &mod);
	printf("%d ,%d\n", div, mod);
	return (0);
}

