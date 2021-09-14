/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncourtel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:09:47 by ncourtel          #+#    #+#             */
/*   Updated: 2021/09/12 14:09:49 by ncourtel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int line, int column, int max_l, int max_c)
{
	if (line == 0)
	{
		if (column == 0)
			ft_putchar('/');
		else if (column == max_c)
			ft_putchar(92);
		else
			ft_putchar('*');
	}
	else if (line == max_l)
	{
		if (column == 0)
			ft_putchar(92);
		else if (column == max_c)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (column == 0 || column == max_c)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	column;
	int	line;

	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			ft_print(line, column, y - 1, x - 1);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
