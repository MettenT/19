/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:39:38 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/07 14:39:39 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>
// int		main (void)
// {
// 	char str[] = "Testing";

// 	int count = ft_strlen(str);

// 	printf("%d\n", count);
// }

// DESCRIPTION
// 	The strlen() function calculates the length of the string
// 	pointed to by s, excluding the terminating null byte ('\0').

// RETURN VALUE
// 	The strlen() function returns the number of characters in 
// 	the string pointed to by s.