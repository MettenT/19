/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:57:47 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/21 23:37:36 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src, char *sep, int total_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	j = 0;
	while (sep[j] && i < total_len - ft_strlen(sep))
	{
		dest[i] = sep[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;
	int		total_len;

	total_len = 0;
	i = -1;
	while (++i < size)
		total_len += ft_strlen(strs[i]) + ft_strlen(sep);
	if (size < 1)
	{
		dest = malloc(1);
		dest[0] = 0;
		return (dest);
	}
	dest = malloc(total_len * sizeof(char) + 1 - ft_strlen(sep));
	if (dest == NULL)
		return (0);
	i = -1;
	dest[0] = '\0';
	while (++i < size)
		dest = ft_strcat(dest, strs[i], sep, total_len);
	return (dest);
}

#include <stdio.h>
int main ()
{    
    char *strcat;
    char *strs[3];
    strs[0] = "fuuuu";
	strs[1] = "sssssiiiii";
	strs[2] = "iiiioooooooooo";

    strcat = ft_strjoin(3, strs, "...");
    printf("=======================================\n");
    printf("strcat = %s\n",strcat);
    printf("=======================================\n");
    return(0);
}
