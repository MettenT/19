/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:42:07 by acretel           #+#    #+#             */
/*   Updated: 2021/09/21 16:42:11 by acretel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		if (s1[i] == s2[i])
		{
			return (0);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char chaine1[] = "123456789";
	char chaine2[] = "987654321";

	ft_strcmp(chaine1, chaine2);
	printf("%d", ft_strcmp(chaine1, chaine2));
	printf("\n%d", strcmp(chaine1, chaine2));
	return(0);
}
