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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	count;
	int	i;	

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
	return (count);
}

// #include <unistd.h>
// #include <stdio.h>
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

// DESCRIPTION
// 	The strlcpy() and strlcat() functions copy and concatenate 
// 	strings respectively. They are designed to be safer, more 
// 	consistent, and less error prone replacements for strncpy(3)
// 	and strncat(3).  Unlike those functions, strlcpy() and
// 	strlcat() take the full size of the buffer (not just the length
// 	) and guarantee to NUL-terminate the result (as long as size is 
// 	larger than 0 or, in the case of strlcat(), as long as there is 
// 	at least one byte free in dst).  Note that a byte for the NUL 
// 	should be included in size.  Also note that strlcpy() and 
// 	strlcat() only operate on true “C” strings.  This means that 
// 	for strlcpy() src must be NUL-terminated and for strlcat() both 
// 	src and dst must be NUL-terminated.

// 	The strlcpy() function copies up to size - 1 characters from 
// 	the NUL-terminated string src to dst, NUL-terminating the result.

// 	The strlcat() function appends the NUL-terminated string src to
// 	 the end of dst.  It will append at most size - strlen(dst) - 1 
// 	 bytes, NUL-terminating the result.

// RETURN VALUES
// 	The strlcpy() and strlcat() functions return the total length 
// 	of the string they tried to create. For strlcpy() that means 
// 	the length of src.  For strlcat() that means the initial length 
// 	of dst plus the length of src. While this may seem somewhat 
// 	confusing, it was done to make truncation detection simple.

// 	Note, however, that if strlcat() traverses size characters
// 	without finding a NUL, the length of the string is considered
// 	to be size and the destination string will not be NUL-terminated
// 	(since there was no space for the NUL). This keeps strlcat() 
// 	from running off the end of a string.  In practice this should
// 	not happen (as it means that either size is incorrect or that
// 	dst is not a proper “C” string). The check exists to prevent
// 	potential security problems in incorrect code.