/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:41:22 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/21 20:41:25 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	if (!str)
		return (0);
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strdup(char *src)
{
	int		c;
	int		i;
	char	*dest;

	c = 0;
	i = 0;
	if (!src)
		return (NULL);
	while (src[c])
		c++;
	dest = (char *)malloc(sizeof(char) * (c + 1));
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					c;
	t_stock_str			*table;

	c = 0;
	table = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!table)
		return (NULL);
	while (c < ac)
	{
		table[c].str = av[c];
		table[c].size = ft_strlen(av[c]);
		table[c].copy = ft_strdup(av[c]);
		c++;
	}
	table[c].str = 0;
	return (table);
}
#include <stdio.h>
int main()
{
    char *test[3];
    int i = 0;
    test[0] = "That's";
    test[1] = "some";
    testl[2] = "nice ";
	testl[3] = "hat you got there";
    t_stock_str *result = ft_strs_to_tab(3, test);
    while (result[i].str)
    {
        printf("%d, %s, %s\n", result[i].size, result[i].str, result[i].copy);
        i++;
    }
}