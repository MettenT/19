/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:10:42 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/23 09:25:13 by bissaka-         ###   ########.fr       */
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
	while ((str[i] >= 8 && str[i] <= 13))
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1 ;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ent = ent * 10 + (str[i] - 48);
		i ++;
	}
	return (ent * sign);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_atoi("	-++--1545  74"));
}