/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:06:01 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/23 12:06:02 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int *result;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int *)malloc(sizeof(int) * (max - min));
	if (!result)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	*range = result;
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	int *range;
// 	int length;

// 	length = ft_ultimate_range(&range, 15, 10);
// 	printf("len = %d\n",length);
// 	if (!range)
// 	{
// 		printf("Pointer set to NULL.\n");
// 		return (0);
// 	}
// 	for (int i = 0; i < length; i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 	return (0);
// }