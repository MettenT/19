/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedesmet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:42:39 by bedesmet          #+#    #+#             */
/*   Updated: 2021/09/21 19:42:41 by bedesmet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	int				division;
	int				modulo;
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	division = nbr / 10;
	modulo = nbr % 10;
	if (division != 0)
	{
		ft_putnbr(division);
	}
	ft_putchar(modulo + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	c;

	c = 0;
	while (par[c].str)
	{
		ft_putstr(par[c].str);
		ft_putnbr(par[c].size);
		ft_putstr("\n");
		ft_putstr(par[c].copy);
		c++;
	}
}

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

int	main(int argc, char **argv)
{
    ft_show_tab(ft_strs_to_tab(argc, argv));
}