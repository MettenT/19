/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:54:34 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/08 13:54:35 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char 	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (i < n)
	{
		j = i + 1;
		if (src[i] == '\0')
		{
			src[j] = src[i];
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
