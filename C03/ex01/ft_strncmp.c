/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 08:55:36 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/13 08:55:38 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int		main()
// {
// 	char s1[] = "Empty";
// 	char s2[] = "Testing comparison";
// 	char s3[] = "Test";

// 	printf("s12: %d, s21: %d, ", ft_strncmp(s1, s2, 5), ft_strncmp(s2, s1, 5));
// 	printf("s13: %d, s31: %d, ", ft_strncmp(s1, s3, 5), ft_strncmp(s3, s1, 5));
// 	printf("s23: %d, s32: %d\n", ft_strncmp(s2, s3, 1), ft_strncmp(s3, s2, 5));
// 	printf("\ns12: %d, s21: %d, ", strncmp(s1, s2, 5), strncmp(s2, s1, 5));
// 	printf("s13: %d, s31: %d, ", strncmp(s1, s3, 5), strncmp(s3, s1, 5));
// 	printf("s23: %d, s32: %d", strncmp(s2, s3, 1), strncmp(s3, s2, 5));
// }

// DESCRIPTION
// 	The strcmp() function compares the two strings s1 and s2.  
// 	It returns an integer less than, equal to, or greater than 
// 	zero if s1 is found, respectively, to be less than, to match,
// 	or be greater than s2.

// 	The strncmp() function is similar, except it compares only 
// 	the first (at most) n bytes of s1 and s2.

// RETURN VALUE
// 	The strcmp() and strncmp() functions return an integer less 
// 	than, equal to, or greater than zero if s1 (or the first n 
// 	bytes thereof) is found, respectively, to be less  than,  to
// 	match, or be greater than s2.