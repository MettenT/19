/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:49:48 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/14 19:49:49 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_free_place()
{
	
}

int ft_ten_queens_puzzle(void)
{
	int board[10][];
	int c;
	int r;
	int n;

	n = 0;
	c = 0;
	r = 0;
	board[0][0] = 0;
	while (c <= 9)
	{
		board[c][r] = n;
		c++;
	}
}
