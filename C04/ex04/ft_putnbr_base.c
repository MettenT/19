/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:10:13 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/14 13:10:13 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_invalid(char *base)
{
	int	i;
	int	n;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		n = 0;
		while (base[n] != '\0')
		{
			if (base[n] == base[i] && i != n)
				return (0);
			n++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_base(int nbr, char *base, unsigned int size)
{
	unsigned int	i;
	char			result;

	if (nbr < 0)
	{
		ft_putchar('-');
		i = nbr * -1;
	}
	else
	{
		i = nbr;
	}
	if (i >= size)
	{
		ft_base(i / size, base, size);
	}
	result = base[i % size];
	ft_putchar(result);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (ft_invalid(base) == 1)
	{
		while (base[i] != '\0')
		{
			i++;
		}
		ft_base(nbr, base, i);
	}
}

// int main(void)
// {
// 	char base[] = "01";
// 	unsigned long c;

// 	c = 0;
// 	while (c < (sizeof(base) - 1))
// 	{
// 		ft_putnbr_base(c, base);
// 		c++;
// 	}
// 	c = 0;
// 	while (c < (sizeof(base) - 1))
// 	{
// 		ft_putnbr_base(c, base);
// 		c++;
// 	}
// 	printf("\n");
// 	ft_putnbr_base(20, base);
// 	printf("\n");
// }

// int main (void)
// {
//     ft_putnbr_base(-123456, "alo");
//         return (0);
// }