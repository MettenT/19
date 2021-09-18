/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:10:57 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/07 14:11:00 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// #include <stdio.h>
// int		main(void)
// {
// 	int a  = 12;
// 	int b  = 5;
// 	int *div = &a;
// 	int *mod = &b;

// 	ft_div_mod(a, b, div, mod);

// 	printf("a : %d",*div);
// 	printf("\nb : %d",*mod);
// }