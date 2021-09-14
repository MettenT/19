/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:04:20 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/14 15:04:21 by tmetten          ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = str[i] - 48 + result * 10;
		i++;
	}		
	return (result * neg);
}

void	ft_base(int nbr, char *base, int size)
{
	unsigned int i;
	unsigned int n;
	char result;

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

int ft_atoi_base(char *str, char *base)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (ft_invalid(base) == 1)
	{
		while (base[i] != '\0')
		{
			i++;
		}
		ft_base(ft_atoi(str), base, i);
		return (0);
	}
	else
	{
		return(0);
	}
}

int main(void)
{
	printf("%d\n", ft_atoi_base("  -+-104.21 + 893 --", "0123456789"));
}