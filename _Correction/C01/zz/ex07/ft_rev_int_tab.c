/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 07:44:54 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/10 07:45:09 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}


int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5};
	int	size;
	int	i;

	size = 6;
	i = 0;
	ft_rev_int_tab(tab, size);	
	while (i < 6)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}

