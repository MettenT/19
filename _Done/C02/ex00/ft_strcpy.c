/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:56:09 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/08 11:56:10 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char source[] = "Source string.";
// 	char destin[] = "Destination string.";
// 	char *dest;

// 	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);

//     dest = ft_strcpy(destin, source);

// 	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
// 	return (0);
// }

// DESCRIPTION
//        The strcpy() function copies the string pointed to by src,
// 		  including the terminating null byte ('\0'), 
// 		  to the buffer pointed to by dest.  The strings may not overlap, 
// 		  and the des tination string dest must be large enough to receive 
//        the copy. Beware of buffer overruns!  (See BUGS.)

// RETURN VALUE
//        The strcpy() and strncpy() functions return a pointer to the
//  	  destination string dest.