/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:10:42 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/19 11:10:45 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	ent;

	i = 0;
	sign = 1;
	ent = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		sign *= -1 ;
		i ++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		ent = ent * 10 + (str[i] - 48);
		i ++;
	}
	return (ent * sign);
}

#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi("      \r\n\t\f---+---+1234ab567"));
}