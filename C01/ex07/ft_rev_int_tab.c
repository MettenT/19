/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:45:08 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/07 14:45:09 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	n;

	i = 0;
	n = size - 1;
	while (i <= n)
	{
		swap = tab[i];
		tab[i] = tab[n];
		tab[n] = swap;
		i++;
		n--;
	}
}

// #include <stdio.h>
// void putarr(int arr[], int size)
// {
//     for (int i = 0; i < (size -1); i++)
//         printf("%d, ", arr[i]);
//     printf("%d\n", arr[size - 1]);
// }

// int		main (void)
// {
// 	int tab[] = {1, 2, 3, 4};
// 	int size;

// 	size = 4;

// 	printf("Original: ");
// 	putarr(tab, size);

// 	ft_rev_int_tab(tab, size);

// 	printf("Modified: ");
// 	putarr(tab, size);
// }