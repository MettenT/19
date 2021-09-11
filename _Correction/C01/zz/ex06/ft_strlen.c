/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:25:05 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/11 16:25:05 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	cp;

	cp = 0;
	while (*str != '\0')
	{
		cp++;
		str++;
	}
	return (cp);
}

int main ()
{
	int cp;
	char	array[] = "salrrrut!";
	cp = ft_strlen(array);
	ft_putchar(cp+'0');
}
