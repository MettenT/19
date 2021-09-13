/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 09:16:00 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/13 09:16:03 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int count;
	int i;	

	count = 0;	
	while (dest[count] != '\0')
	{
		count++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return(dest);
}

// int		main(void)
// {
// 	char dest[] = "Hello";
// 	char src[] = ", world!";

// 	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
// 	ft_strcat(dest, src);
// 	printf("result = %s\n-----\n", dest);

// 	return (0);
// }
