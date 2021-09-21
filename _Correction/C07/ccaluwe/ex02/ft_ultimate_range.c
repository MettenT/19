/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:32:18 by ccaluwe           #+#    #+#             */
/*   Updated: 2021/09/15 11:32:19 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;

	c = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(((max - min) + 1) * sizeof(int));
	if (malloc(sizeof(int) * (max - min + 1) == NULL))
		return (-1);
	while (min < max)
	{
		range[c] = min;
		c++;
		min ++;
	}
	range[c] = '\0';
	return (c);
}

// #include <stdio.h>
//
// int main()
// {
// 	int *range;
// 	int len;
//
// 	len = ft_ultimate_range(&range, -15, 15);
// 	printf("len = %d\n",len);
// 	if (!range)
// 	{
// 		printf("Pointer set to NULL.\n");
// 		return (0);
// 	}
// 	for (int i = 0; i < len; i++)
// 	{
// 		printf("%d ", range[i]);
// 	}
// 	return (0);
// }