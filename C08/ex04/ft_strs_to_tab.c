/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 07:44:00 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/23 07:44:01 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	str = (char *)malloc(sizeof(*str) * (i + 1));
	if (!str)
	{
		return (NULL);
	}	
	j = 0;
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
	{
		return (NULL);
	}	
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

// #include <stdio.h>
// int main()
// {
// 	char *test[4];
// 	int i = 0;
// 	test[0] = "That's";
// 	test[1] = "some";
// 	test[2] = "nice ";
// 	test[3] = "hat you got there";

// 	t_stock_str *result = ft_strs_to_tab(4, test);
// 	while (result[i].str)
// 	{
// 		printf("Size: %d, String: %s", result[i].size, result[i].str);
// 		printf(", Copy: %s\n", result[i].copy);
// 		i++;
// 	}
// }