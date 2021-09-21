/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:22:08 by lmaurice          #+#    #+#             */
/*   Updated: 2021/09/16 09:22:11 by lmaurice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	s;

	s = 0;
	while (str[s])
	{
		if (!((str[s] >= 'A' && str[s] <= 'Z')))
		{
			return (0);
		}
		s++;
	}
	return (1);
}


int main()
{
	char	str[] = "abcdefg";
	char	str1[] = "AloA";
	char	str2[] = "";
	char	str3[] = "ABCDEFG";

	printf("str = %d\n", ft_str_is_uppercase(str));
	printf("str1 = %d\n", ft_str_is_uppercase(str1));
	printf("str2 = %d\n", ft_str_is_uppercase(str2));
	printf("str3 = %d\n", ft_str_is_uppercase(str3));
}
