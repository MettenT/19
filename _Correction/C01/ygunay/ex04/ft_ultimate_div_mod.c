/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:34:24 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/09 20:34:41 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}


int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("%d, %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d\n", a, b);
	return (0);
}

