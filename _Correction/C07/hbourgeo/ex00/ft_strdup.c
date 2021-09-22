/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:59:15 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/21 16:54:37 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;

	size = ft_strlen(src);
	dup = malloc(size * sizeof(char) + 1);
	if (dup == NULL)
		return (0);
	ft_strcpy(dup, src);
	return (dup);
}

#include <string.h>
#include <stdio.h>
int	main ()
{
	const char str1[] = "Test"; //try with : "" / "t" / "\0"
	char str1_bis[] = "Test"; //try with : "" / "t" /  "\0"
	char *str2;
	char *str3;

	printf("____________________________________\n\n");
	str2 = strdup(str1);
	printf("	src func : %s\n",str2);

	str3 = ft_strdup(str1_bis);
	printf("	own func : %s\n",str3);
	printf("_____________________________________\n");
}