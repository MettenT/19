/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:34:41 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/18 09:34:43 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_h/main.h"

int	main(int argc, char *argv[])
{		
	char *input;	

	if (ft_invalid(argc, argv) == 1)
	{
		ft_remove_white_spaces(argv[1]);
		input = argv[1];
		ft_putstr(input);
		
	}	
	char ** result;
	int i;
	int j;
	int k;

	i = 0;
	j = 0:
	k = 0;
	while (input[i] != '\0')
	{
		j = i / 4;
		k = i % 4;
		if (input[i] < 4)
		{
			
		}
		if (input[i] < 8)
		{
			
		}
		if (input[i] < 12)
		{
			
		}
		if (input[i] < 16)
		{
			
		}
	}
	return (0);

// top 
// bot
// left 
// right
}


