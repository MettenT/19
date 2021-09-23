/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trigaud <trigaud@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:06:36 by trigaud           #+#    #+#             */
/*   Updated: 2021/09/20 13:06:39 by trigaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	if (n == 0)
		return (0);
	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && s1[c] == s2[c] && c < n - 1)
	{
		c++;
	}
	if (s1[c] == '\0' && s2[c] == '\0')
	{
		return (0);
	}
	return (s1[c] - s2[c]);
}

#include <stdio.h>
#include <string.h>
int		main()
{
	char s1[] = "Empty";
	char s2[] = "Testing comparison";
	char s3[] = "Test";

	printf("s12: %d, s21: %d, ", ft_strncmp(s1, s2, 5), ft_strncmp(s2, s1, 5));
	printf("s13: %d, s31: %d, ", ft_strncmp(s1, s3, 5), ft_strncmp(s3, s1, 5));
	printf("s23: %d, s32: %d\n", ft_strncmp(s2, s3, 1), ft_strncmp(s3, s2, 5));
	printf("\ns12: %d, s21: %d, ", strncmp(s1, s2, 5), strncmp(s2, s1, 5));
	printf("s13: %d, s31: %d, ", strncmp(s1, s3, 5), strncmp(s3, s1, 5));
	printf("s23: %d, s32: %d", strncmp(s2, s3, 1), strncmp(s3, s2, 5));
}
