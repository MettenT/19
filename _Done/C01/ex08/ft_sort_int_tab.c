/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:51:39 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/08 10:51:40 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	n;
	int	j;

	i = 0;
	n = size - 1;
	while (i <= n)
	{
		j = i + 1;
		if (tab[i] > tab[j] && tab[j] != '\0')
		{
			swap = tab[i];
			tab[i] = tab[j];
			tab[j] = swap;
			ft_sort_int_tab(tab, size);
		}
		i++;
	}
}

// void putarr(int arr[], int size)
// {
//     for (int i = 0; i < (size -1); i++)
//         printf("%d, ", arr[i]);
//     printf("%d\n", arr[size - 1]);
// }

// int		main (void)
// {
// 	int tab[] = {10, 7, 8, 3, 1, 5};
// 	int size;

// 	size = 6;

// 	printf("Original: ");
// 	putarr(tab, size);

// 	ft_sort_int_tab(tab, size);

// 	printf("Modified: ");
// 	putarr(tab, size);
// }