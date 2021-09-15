/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 08:52:19 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/09 08:52:20 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			i++;
		}	
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
// 	char *p_lwr;
// 	p_lwr = lowercase;

// 	char special[] = "abcdefghijklmnopqrstuvwxyzA";
// 	char *p_spe;
// 	p_spe = special;

// 	char empty[] = "";
// 	char *p_emp;
// 	p_emp = empty;

// 	printf("-----\n1 = String contains only lowercase chars\n");
// 	printf("0 = String doesn't contain only lowercase chars\n\n");
// 	printf("%s = %d\n", lowercase, ft_str_is_lowercase(p_lwr));
// 	printf("%s = %d\n", special, ft_str_is_lowercase(p_spe));
// 	printf("Empty = %d\n-----\n", ft_str_is_lowercase(p_emp));

// 	return (0);
// }