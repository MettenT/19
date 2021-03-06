/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuzdin <abuzdin@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 07:23:56 by abuzdin           #+#    #+#             */
/*   Updated: 2021/09/21 07:23:58 by abuzdin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_totallen(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		length;

	j = 0;
	length = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			++length;
			++i;
		}
		++j;
	}
	i = 0;
	while (sep[i])
		++i;
	return (length + i * (size - 1));
}

void	ft_addsep(char **unistr, char *sep)
{
	int		s;

	s = 0;
	while (sep[s])
	{
		**unistr = sep[s];
		++*unistr;
		++s;
	}
}

void	ft_concatenation(int size, char *unistr, char **strs, char *sep)
{
	int		i;
	int		j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			*unistr = strs[j][i];
			++unistr;
			++i;
		}
		if (j < size - 1)
			ft_addsep(&unistr, sep);
		j++;
	}
	*unistr = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	char	*unistr;

	if (size != 0)
	{
		length = ft_totallen(size, strs, sep);
		unistr = (char *)malloc(sizeof(*unistr) * (length + 1));
	}
	else
	{
		unistr = (char *)malloc(1);
		*unistr = '\0';
		return (unistr);
	}
	ft_concatenation(size, unistr, strs, sep);
	return (unistr);
}


#include <stdio.h>
int	main(void)
{
	char	*strs[5];

	strs[0] = "hello";
	strs[1] = "there";
	strs[2] = "you";
	strs[3] = "look";
	strs[4] = "great";
	printf("%s\n", ft_strjoin(5, strs, "!"));
	return (0);
}
