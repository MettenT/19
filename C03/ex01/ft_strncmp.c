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

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;		
	}
	return (s1[i] - s2[i]);
}

int		main()
{
	char s1[] = "Empty";
	char s2[] = "Testing comparison";
	char s3[] = "Test";

	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", ft_strncmp(s1, s2, 5), ft_strncmp(s2, s1, 5), ft_strncmp(s1, s3, 5), ft_strncmp(s3, s1, 5), ft_strncmp(s2, s3, 1), ft_strncmp(s3, s2, 5));
	printf("\n\ns12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", strncmp(s1, s2, 5), strncmp(s2, s1, 5), strncmp(s1, s3, 5), strncmp(s3, s1, 5), strncmp(s2, s3, 1), strncmp(s3, s2, 5));
}