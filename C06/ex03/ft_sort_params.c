/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 07:40:52 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/15 07:40:53 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_params(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < argc - 1 && argc > 1)
	{
		j = 0;
		while (argv[i][j] >= argv[i + 1][j] && argv[i] && argv[i + 1])
		{
			if (argv[i][j] == argv[i + 1][j])
				j++;
			else
			{
				swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap;
				i = 1;
			}
		}
		i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
