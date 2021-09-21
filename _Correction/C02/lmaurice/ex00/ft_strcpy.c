/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:57:06 by lmaurice          #+#    #+#             */
/*   Updated: 2021/09/15 14:57:10 by lmaurice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0' )
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}


int main(void)
{
	char a[] = "Bebouuuuu";
    char b[] = "         ";

    ft_strcpy(b, a);
    printf("%s" , b);
	return (0);
}
