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

char	*ft_strupcase(char *str)
{
	int	s;

	s = 0;
	while (str[s])
	{
		if (str[s] >= 97 && str[s] <= 122)
		{
			str[s] = str[s] - 32;
		}
		s++;
	}
	 return (str);
}


int main()
{
	char	str[] = "abcdefg";
	char	str1[] = "AloA";

	printf("str = %s\n", ft_strupcase(str));
	printf("str1 = %s\n", ft_strupcase(str1));
}
