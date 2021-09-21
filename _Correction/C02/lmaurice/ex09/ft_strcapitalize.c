/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:26:29 by lmaurice          #+#    #+#             */
/*   Updated: 2021/09/16 10:26:36 by lmaurice         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	s;

	s = 0;
	ft_strlowcase(str);
	while (str[s] != '\0')
	{
		if ((str[s] >= 'a' && str[s] <= 'z') && ((str[s - 1] < '0')
				|| (str[s - 1] > '9' && str[s - 1] < 'A')
				|| (str[s - 1] > 'Z' && str[s - 1] < 'a')
				|| (str[s - 1] > 'z')))
		{
			str[s] = str[s] - 32;
		}
		s++;
	}
	return (str);
}

int main()
{
	char	str[] = "je suis une@pETITE fillE+gentille";

	printf("str = %s\n", ft_strcapitalize(str));
}
