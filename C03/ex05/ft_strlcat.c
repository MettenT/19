/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:47:01 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/13 12:47:02 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int count;
	int i;	

	count = 0;	
	while (dest[count] != '\0')
	{
		count++;
	}

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return(count);
}

// int				main()
// {
// 	char			str0[50];
// 	char			str1[50];
// 	char			str2[] = "car!";
// 	unsigned int	Example1;
// 	unsigned int	Example2;

// 	str0[0] = 'N';
// 	str0[1] = 'i';
// 	str0[2] = 'c';
// 	str0[3] = 'e';
// 	str0[4] = ' ';
// 	str0[5] = '\0';

// 	str1[0] = 'N';
// 	str1[1] = 'e';
// 	str1[2] = 'a';
// 	str1[3] = 't';
// 	str1[4] = ' ';
// 	str1[5] = '\0';

// 	Example1 = ft_strlcat(str0, str2, 3);

// 	printf("String final: %s, i: %d\n", str0, Example1);

// 	Example2 = ft_strlcat(str1, str2, 4);

// 	printf("String final: %s, i: %d", str1, Example2);

// }