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

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	i;	

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
	return (dest);
}

// #include <unistd.h>
// #include <stdio.h>
// int		main(void)
// {
// 	char dest[] = "Hello";
// 	char src[] = ", world!";

// 	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
// 	ft_strcat(dest, src);
// 	printf("result = %s\n-----\n", dest);

// 	return (0);
// }

// DESCRIPTION
// 	The  strcat()  function  appends  the  src  string to 
// 	the dest string, overwriting the terminating null byte 
// 	('\0') at the end of dest, and then adds a terminating 
// 	null byte. The strings may not overlap, and the dest 
// 	string must have enough space for the result.  If dest 
// 	is not large enough, program behavior is unpredictable; 
// 	buffer overruns are a favorite avenue for attacking 
// 	secure programs.

// RETURN VALUE
// 	The strcat() and strncat() functions return a pointer 
// 	to the resulting string dest.