/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:20:08 by lmaurice          #+#    #+#             */
/*   Updated: 2021/09/16 09:20:11 by lmaurice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	s;

	s = 0;
	while (str[s])
	{
		if (!((str[s] >= 'a' && str[s] <= 'z')))
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
	char	str3[] = "A";

	printf("str = %d\n", ft_str_is_lowercase(str));
	printf("str1 = %d\n", ft_str_is_lowercase(str1));
	printf("str2 = %d\n", ft_str_is_lowercase(str2));
	printf("str3 = %d\n", ft_str_is_lowercase(str3));
}
