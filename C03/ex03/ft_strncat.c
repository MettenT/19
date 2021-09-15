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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	count;
	int	i;	

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
	return (dest);
}

// #include <unistd.h>
// #include <stdio.h>
// int		main(void)
// {
// 	char dest[] = "123";
// 	char src[] = "4567890";
// 	unsigned int nb = 3;

// 	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
// 	ft_strncat(dest, src, nb);
// 	printf("result = %s\n-----\n", dest);

// 	return (0);
// }

// DESCRIPTION
// 	The  strcat()  function  appends  the  src  string to the 
// 	dest string, overwriting the terminating null byte ('\0') 
// 	at the end of dest, and then adds a terminating null byte. 
// 	The strings may not overlap, and the dest string must have 
// 	enough space for the result.  If dest is not large enough, 
// 	program behavior is unpredictable; buffer overruns are a 
// 	favorite avenue for attacking secure programs.

// 	The strncat() function is similar, except that

// 	*  it will use at most n bytes from src; and

// 	*  src does not need to be null-terminated if it contains n 
// 	or more bytes.

// 	As with strcat(), the resulting string in dest is always 
// 	null-terminated.

// 	If src contains n or more bytes, strncat() writes n+1 bytes to dest 
// 	(n from src plus the terminating null byte).  Therefore, the size 
// 	of dest must be at least strlen(dest)+n+1.

// RETURN VALUE
// 	The strcat() and strncat() functions return a pointer to the resulting
// 	 string dest.