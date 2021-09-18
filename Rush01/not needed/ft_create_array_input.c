/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_array_input.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:26:48 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/18 17:26:49 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char** ft_create_array_input(char *str[])
{
	char **input;
	int i;
	int row;
	int column;

	input = 0;
	i = 0;
	while (str[1][i] != '\0')
	{
		row = 0;
		column = 0;
		if (i % 2 == 0)
		{
			if (column == 4)
			{
				column = 0;
				row++;
			}			
			input[row][column] = str[0][i];
			i++;
			column++;
		}
		else
		{
			i++;
		}
	}
	return (input);
}



