/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:26:54 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/23 12:26:55 by tmetten          ###   ########.fr       */
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

int	ft_count(int size, char **strs, char *sep)
{
	int i;
	int count;
	int countarray;

	count = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		countarray += ft_strlen(strs[i]);
		i++;
	}
	count += countarray;
	return (count);
}

char *concat(int size, char **strs, char *sep)
{

}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *result;
	char *emptystr;

	result = (char *)malloc(sizeof(char) * (ft_count(size, strs, sep) + 1))
	if (!result)
	{
		return (NULL);
	}
	if (size == 0)
	{
		emptystr = malloc(1);
		*emptystr = 0;
		return (emptystr);
	}
	i = 0;
	while ()
}

