/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:46:44 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/18 17:46:46 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_h/main.h"

void	ft_print_array(char *str[])
{
	int row;
	int column;

	row = 0;
	column = 0;
	while (row < 4)
	{
		while (column < 4)
		{
			ft_putchar(str[row][column]);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
