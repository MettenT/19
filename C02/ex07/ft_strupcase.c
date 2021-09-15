/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:20:25 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/09 12:20:26 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
// 	char *p_lwr;
// 	p_lwr = lowercase;

// 	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	char *p_all;
// 	p_all = allcases;

// 	char empty[] = "";
// 	char *p_emp;
// 	p_emp = empty;

// 	printf("\n-----\n%s = ", lowercase);
// 	printf("%s\n", ft_strupcase(p_lwr));
// 	printf("%s = ", allcases);
// 	printf("%s\n", ft_strupcase(p_all));
// 	printf("Empty = %s\n-----\n", ft_strupcase(p_emp));
// }