/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuzdin <abuzdin@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 07:22:47 by abuzdin           #+#    #+#             */
/*   Updated: 2021/09/21 07:22:48 by abuzdin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h> 

int	*ft_range(int min, int max)
{
	int 	size;
	int		*tab;
	int		i;

	if (min >= max)
		return (NULL);
	size = max - min;//  (2147483647)   -  (-2147483648)
	tab = (int *)malloc(sizeof(*tab) * size);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		++min;
		++i;
	}
	return (tab);
}


#include <stdio.h>
int	main()
{
	int		*tab;
	int		j;
	
	tab = ft_range(-2147483648, 2147483646);

	return (0);
}
