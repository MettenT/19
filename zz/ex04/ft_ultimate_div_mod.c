/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:12:47 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/07 14:12:49 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;

	mod = *a;
	if (*b != 0)
	{
		*a /= *b;
		*b = mod % *b;
	}
}

// #include <stdio.h>
// int		main(void)
// {
// 	int i = 10;
// 	int j = 3;
// 	int *a = &i;
// 	int *b = &j;

// 	printf("%d /",i);
// 	printf(" %d\n",j);

// 	ft_ultimate_div_mod(a, b);

// 	printf("div (*a) = %d\n",*a);
// 	printf("mod (*b) = %d",*b);
// }