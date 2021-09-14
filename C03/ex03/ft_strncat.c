/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:21:36 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/13 10:21:38 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int count;
	int i;	

	count = 0;	
	while (dest[count] != '\0')
	{
		count++;
	}

	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return(dest);
}

int		main(void)
{
	char dest[] = "123";
	char src[] = "4567890";
	unsigned int nb = 3;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
	ft_strncat(dest, src, nb);
	printf("result = %s\n-----\n", dest);

	return (0);
}
