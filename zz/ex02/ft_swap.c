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
// 	int i  = 7;
// 	int j  = 3;
// 	int *a = &i;
// 	int *b = &j;

// 	ft_swap(a, b);
// 	printf("i should be 7 and it is : %u\n",*a);
// 	printf("j should be 3 and it is : %u",*b);
// }