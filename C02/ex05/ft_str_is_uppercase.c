/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:02:02 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/09 09:02:03 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
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
// 	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	char *p_upr;
// 	p_upr = uppercase;

// 	char special[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
// 	char *p_spe;
// 	p_spe = special;

// 	char empty[] = "";
// 	char *p_emp;
// 	p_emp = empty;

// 	printf("-----\n1 = String contains only uppercase chars");
// 	printf("\n0 = String doesn't contain only uppercase chars\n\n");
// 	printf("%s = %d\n", uppercase, ft_str_is_uppercase(p_upr));
// 	printf("%s = %d\n", special, ft_str_is_uppercase(p_spe));
// 	printf("Empty = %d\n-----\n", ft_str_is_uppercase(p_emp));

// 	return (0);
// }