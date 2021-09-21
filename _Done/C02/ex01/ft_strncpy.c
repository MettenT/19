/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:54:34 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/08 13:54:35 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char src[] = "Source string.";
// 	char dest[] = "Destination string.";
// 	unsigned int n;

// 	n = 3;

// 	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

//     ft_strncpy(dest, src, n);

// 	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
// 	return (0);
// }

// DESCRIPTION
//        The strcpy() function copies the string pointed to by src, 
// 	   including the terminating null byte ('\0'), to the buffer pointed 
// 	   to by dest.  The strings may not overlap, and the des‐
//        tination string dest must be large enough to receive the copy.  
// 	   Beware of buffer overruns!  (See BUGS.)

//        The strncpy() function is similar, except that at most n bytes of
// 	    src are copied.  Warning: If there is no null byte among the first
// 		 n bytes of src, the string placed in dest will
//        not be null-terminated.

// 	   If the length of src is less than n, strncpy() writes additional 
// 	   null bytes to dest to ensure that a total of n bytes are written.

// RETURN VALUE
// 		The strcpy() and strncpy() functions return a pointer to the 
// 		destination string dest.