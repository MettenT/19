/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:23:29 by lmaurice          #+#    #+#             */
/*   Updated: 2021/09/16 10:23:36 by lmaurice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	s;

	s = 0;
	while (str[s])
	{
		if (str[s] >= 65 && str[s] <= 90)
		{
			str[s] = str[s] + 32;
		}
		s++;
	}
	 return (str);
}


int main()
{
	char	str[] = "ABCDEFG";
	char	str1[] = "AloA";

	printf("str = %s\n", ft_strlowcase(str));
	printf("str1 = %s\n", ft_strlowcase(str1));
}
