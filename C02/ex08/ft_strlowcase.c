/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:38:23 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/09 12:38:24 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	char *upr;
// 	upr = uppercase;

// 	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	char *p_all;
// 	p_all = allcases;

// 	char empty[] = "";
// 	char *p_emp;
// 	p_emp = empty;

// 	printf("\n-----\n%s = ", uppercase);
// 	printf("%s\n", ft_strlowcase(upr));
// 	printf("%s = ", allcases);
// 	printf("%s\n", ft_strlowcase(p_all));
// 	printf("Empty = %s\n-----\n", ft_strlowcase(p_emp));
// }