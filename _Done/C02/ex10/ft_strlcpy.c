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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char src[] = "Source";
// 	char dest[] = "Car";
// 	unsigned int n;

// 	n = 3;

// 	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);

//     n = ft_strlcpy(dest, src, n);

// 	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, n);
// 	return (0);
// }

// DESCRIPTION
// 	The strlcpy() and strlcat() functions copy and concatenate strings 
// 	respectively. They are designed to be safer, more consistent, and 
// 	less error prone replacements for strncpy(3) and strncat(3). 
// 	Unlike those functions, strlcpy() and strlcat() take the full size 
// 	of the buffer (not just the length) and guarantee to NUL-terminate 
// 	the result (as long as size is larger than 0 or, in the case of 
// 	strlcat(), as long as there is at least one byte free in dst).
// 	Note that a byte for the NUL should be included in size.  
// 	Also note that strlcpy() and strlcat() only operate on true “C” 
// 	strings.  This means that for strlcpy() src must be NUL-terminated 
// 	and for strlcat() both src and dst must be NUL-terminated.

// 	The strlcpy() function copies up to size - 1 characters from the 
// 	NUL-terminated string src to dst, NUL-terminating the result.

// RETURN VALUES
// 	The strlcpy() and strlcat() functions return the total length of 
// 	the string they tried to create.  For strlcpy() that means the 
// 	length of src.  For strlcat() that means the initial length of 
// 	dst plus the length of src.  While this may seem somewhat
// 	confusing, it was done to make truncation detection simple.