/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:31:50 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/13 10:31:55 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c ++;
	}
	return (c);
}

#include <stdio.h>
int main()
{
	char str[] = "test";
	int result = ft_strlen(str);
	printf("%d", result);
}

// #include <stdio.h>
// int		main (void)
// {
// 	char str[] = "Testing";

// 	int count = ft_strlen(str);

// 	printf("%d\n", count);
// }