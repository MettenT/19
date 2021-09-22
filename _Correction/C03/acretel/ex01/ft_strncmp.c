/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acretel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:42:29 by acretel           #+#    #+#             */
/*   Updated: 2021/09/21 16:42:32 by acretel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
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

/*
int main(void)
{
	char chaine1[] = "123456789";
	char chaine2[] = "987654321";

	ft_strncmp(chaine1, chaine2, 3);
	printf("%d", ft_strncmp(chaine1, chaine2, 3));
	return(0);
}
*/