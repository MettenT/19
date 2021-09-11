/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:23:59 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/11 16:24:04 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	cp;
	int	tab_tmp;

	cp = 0;
	while (cp < size--)
	{
		tab_tmp = tab[cp];
		tab[cp] = tab[size];
		tab[size] = tab_tmp;
		cp++;
	}
}

int main ()
{
	int size = 8;
	int tab[8] = {1, 2, 3, 4, 5 ,6 ,7 ,8};
	int cp;

	cp= 0;
	ft_rev_int_tab(tab, size);

	while (size-- != 0)
	{
		ft_putchar(tab[cp] + '0');
		cp++;
	}
}