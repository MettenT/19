/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 08:16:43 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/13 08:16:45 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>
int		main()
{
	char s1[] = "Empty";
	char s2[] = "Testing comparison";
	char s3[] = "Test";

	printf("s12: %d, s21: %d, ", ft_strcmp(s1, s2), ft_strcmp(s2, s1));
	printf("s13: %d, s31: %d, ", ft_strcmp(s1, s3), ft_strcmp(s3, s1));
	printf("s23: %d, s32: %d\n", ft_strcmp(s2, s3), ft_strcmp(s3, s2));
	printf("\ns12: %d, s21: %d, ", strcmp(s1, s2), strcmp(s2, s1));
	printf("s13: %d, s31: %d, ", strcmp(s1, s3), strcmp(s3, s1));
	printf("s23: %d, s32: %d", strcmp(s2, s3), strcmp(s3, s2));
}

// DESCRIPTION
// 	The strcmp() function compares the two strings s1 and s2.  
// 	It returns an integer less than, equal to, or greater than 
// 	zero if s1 is found, respectively, to be less than, to match,
// 	or be greater than s2.

// RETURN VALUE
// 	The strcmp() and strncmp() functions return an integer less 
// 	than, equal to, or greater than zero if s1 (or the first n 
// 	bytes thereof) is found, respectively, to be less  than,  to
// 	match, or be greater than s2.