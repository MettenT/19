/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:29:50 by lmaurice          #+#    #+#             */
/*   Updated: 2021/09/16 08:29:57 by lmaurice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	c;

	c = 0;
	while (src[c] != '\0' && n > 0)
	{
		dest[c] = src[c];
		c++;
		n--;
	}
	while (n > 0)
	{
		dest[c] = '\0';
		c++;
		n--;
	}
	return (dest);
}


int	main(void)
{
	char scr2[] = "yoloooo";
	char dest2[] = "hshsjysejydyjsr";

	printf("%s", scr2);
	printf("\n");
	printf("%s", dest2);
	printf("\n");
	ft_strncpy(dest2, scr2, 5);
	printf("%s", dest2);
	return(0);
}
