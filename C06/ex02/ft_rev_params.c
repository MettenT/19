/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:18:05 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/14 21:18:09 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char *argv[])
{
	int count;
	int j;

	count = argc - 1;
	if (argc > 1)
	{
		while (count >= 1)
		{
			j = 0;
			while (argv[count][j] != '\0')
			{
				ft_putchar(argv[count][j]);
				j++;
			}
			ft_putchar('\n');
			count--;
		}
	}
	return(0);
}
