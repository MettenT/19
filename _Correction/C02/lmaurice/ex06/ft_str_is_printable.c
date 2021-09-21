/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:24:08 by lmaurice          #+#    #+#             */
/*   Updated: 2021/09/16 09:24:11 by lmaurice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	s;

	s = 0;
	while (str[s])
	{
		if (!((str[s] >= 32 && str[s] <= 126)))
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
	char	str1[] = "\n\t\a\v\r\f\b\n";
	char	str2[] = "";
	char	str3[] = "nombre989";
	char	str4[] = "@";

	printf("str = %d\n", ft_str_is_printable(str));
	printf("str1 = %d\n", ft_str_is_printable(str1));
	printf("str2 = %d\n", ft_str_is_printable(str2));
	printf("str3 = %d\n", ft_str_is_printable(str3));
	printf("str4 = %d\n", ft_str_is_printable(str4));
}
