/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:23:25 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/09 13:23:26 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy( char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while(src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;		
	}
	dest[i] = '\0';
	return(i);
}

int		main(void)
{
	char src[] = "Source";
	char dest[] = "";
	unsigned int n;

	n = 4;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);

    n = ft_strlcpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, n);
	return (0);
}
