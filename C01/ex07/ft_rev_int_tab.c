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

#include <unistd.h>

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
