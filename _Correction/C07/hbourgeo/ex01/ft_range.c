/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:22:21 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/21 13:48:21 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	i;
	int	*tab_minmax;

	diff = max - min;
	i = 0;
	if (min >= max)
		return (0);
	tab_minmax = malloc(diff * sizeof(int));
	if (tab_minmax == NULL)
		return (0);
	while (i < diff)
	{
		tab_minmax[i] = min + i;
		i++;
	}
	return (tab_minmax);
}

#include <stdio.h>
int main ()
{
	int *tab_minmax;
	int min;
	int max;
	int size;
	int i;

	min = -1000 ; 		// try with : 	 10 / 0 /  0 /          0
	max = 2147483647; 			// try with : 	-10 / 0 / 10 / 2147483648
	size = max - min;
	i = 0;	
	tab_minmax = ft_range(min, max);
	printf("=======================================\n");
	while(i < size)
	{
		printf("tab_minmax(%d) = %d\n",i,tab_minmax[i]);
		i++;
	}
	printf("=======================================\n");
	return(0);
}
