/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trigaud < trigaud@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:36:56 by trigaud           #+#    #+#             */
/*   Updated: 2021/09/20 10:36:58 by trigaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && s1[c] == s2[c])
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

	printf("s12: %d, s21: %d, ", ft_strcmp(s1, s2), ft_strcmp(s2, s1));
	printf("s13: %d, s31: %d, ", ft_strcmp(s1, s3), ft_strcmp(s3, s1));
	printf("s23: %d, s32: %d\n", ft_strcmp(s2, s3), ft_strcmp(s3, s2));
	printf("\ns12: %d, s21: %d, ", strcmp(s1, s2), strcmp(s2, s1));
	printf("s13: %d, s31: %d, ", strcmp(s1, s3), strcmp(s3, s1));
	printf("s23: %d, s32: %d", strcmp(s2, s3), strcmp(s3, s2));
}
