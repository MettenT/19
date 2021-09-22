/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:58:42 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/21 13:48:13 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (size);
}

#include <stdio.h>
int main ()
{
	int *tab_minmax[0];
	int min;
	int max;
	int size;
	int i;

	min = 0; // try with : 	 10 / 0 /  0 /          0
	max = 10; // try with : 	-10 / 0 / 10 / 2147483648
	size = 0;
	i = 0;
	size = ft_ultimate_range(tab_minmax, min, max);
	printf("=======================================\n");
	while(i < size)
	{
		printf("tab_minmax[0][%d] = %d\n",i,tab_minmax[0][i]);
		i++;
	}
	printf("size tab_minmax = %d\n",size);
	printf("=======================================\n");
	return(0);
}
