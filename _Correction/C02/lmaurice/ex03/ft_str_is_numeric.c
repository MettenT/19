/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 09:14:08 by lmaurice          #+#    #+#             */
/*   Updated: 2021/09/16 09:14:11 by lmaurice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	s;

	s = 0;
	while (str[s])
	{
		if (!((str[s] >= '0' && str[s] <= '9')))
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
	char	str1[] = "1 5 9 34 5";
	char	str2[] = "";
	char	str3[] = "nombre989";

	printf("str = %d\n", ft_str_is_numeric(str));
	printf("str1 = %d\n", ft_str_is_numeric(str1));
	printf("str2 = %d\n", ft_str_is_numeric(str2));
	printf("str3 = %d\n", ft_str_is_numeric(str3));
}
