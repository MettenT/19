/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:38:01 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/13 11:38:02 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}				
			j++;
		}
		i++;
	}
	return (0);
}

// #include <unistd.h>
// #include <stdio.h>
// int		main(void)
// {
// 	char str[] = "0123450123456789";
// 	char to_find[] = "45678";

// 	printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
// 	printf("%s\n", ft_strstr(str, to_find));

// 	return (0);
// }

// DESCRIPTION
// 	The strstr() function finds the first occurrence of the 
// 	substring needle in the string haystack. The terminating 
// 	null bytes ('\0') are not compared.

// RETURN VALUE
// 	These functions return a pointer to the beginning of the 
// 	located substring, or NULL if the substring is not found.