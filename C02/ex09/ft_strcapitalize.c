/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:47:10 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/09 12:47:10 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (j == 0 && 'a' <= str[i] && str[i] <= 'z')
		{
			str[i] -= 32;
			j++;
		}
		else if (j != 0 && 'A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
			j++;
		}
		else if (str[i] < '0' || ('9' < str[i] && str[i] < 'A')
			|| ('Z' < str[i] && str[i] < 'a') || 'z' < str[i])
			j = 0;
		else
			j++;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int		main(void)
// {	
// 	char str1[] = "salut, comment tu vas ?";

// 	char str2[] = " 42mots quarante-deux; cinquante+et+un";

// 	char empty[] = "";

// 	printf("\n-----\nBEF = %s", str1);
// 	printf("\nAFT = %s\n", ft_strcapitalize(str1));
// 	printf("\nBEF = %s", str2);
// 	printf("\nAFt = %s\n", ft_strcapitalize(str2));
// 	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));
// }
