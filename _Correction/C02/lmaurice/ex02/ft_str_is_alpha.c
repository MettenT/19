/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:31:08 by lmaurice          #+#    #+#             */
/*   Updated: 2021/09/16 08:31:11 by lmaurice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	s;

	s = 0;
	while (str[s])
	{
		if (!((str[s] >= 'A' && str[s] <= 'Z')
				|| (str[s] >= 'a' && str[s] <= 'z')))
		{
			return (0);
		}
		s++;
	}
	return (1);
}


int main()
{
	char	str[] = "123456789";
	char	str1[] = "abcdefg";
	char	str2[] = "ABCDR";
	char	str3[] = "nombre989";
	char	str4[] = "HeLlOcAvA";
	char	str5[] = "coucou je suis la";
	char	str6[] = "";

	printf("str = %d\n", ft_str_is_alpha(str));
	printf("str1 = %d\n", ft_str_is_alpha(str1));
	printf("str2 = %d\n", ft_str_is_alpha(str2));
	printf("str3 = %d\n", ft_str_is_alpha(str3));
	printf("str4 = %d\n", ft_str_is_alpha(str4));
	printf("str5 = %d\n", ft_str_is_alpha(str5));
	printf("str6 = %d\n", ft_str_is_alpha(str6));
}
