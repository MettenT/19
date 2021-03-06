/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:53:09 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/07 13:53:11 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{	
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// #include <stdio.h>
// int		main(void)
// {
// 	int i  = 12;
// 	int j  = 8;
// 	int *a = &i;
// 	int *b = &j;

// 	ft_swap(a, b);
// 	printf("Original: 12,  New : %u\n",*a);
// 	printf("Original: 8,  New : %u",*b);
// }