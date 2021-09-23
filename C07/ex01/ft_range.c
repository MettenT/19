/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:10:40 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/23 11:10:41 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *result;
	int i;

	if (min >= max)
	{
		return (NULL);
	}
	result = (int *)malloc(sizeof(int) * (max - min));
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}

// #include <stdio.h>

// int main()
// {
// 	int *range = ft_range(15, 10);
// 	if (range == NULL)
// 	{
// 		printf("NULL pointer has been returned.\n");
// 		return (0);
// 	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 	return (0);
// }
