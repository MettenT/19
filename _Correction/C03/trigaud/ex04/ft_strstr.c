/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trigaud <trigaud@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:04:52 by trigaud           #+#    #+#             */
/*   Updated: 2021/09/21 19:04:55 by trigaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		while (str[i + n] == to_find[n] && to_find[n])
		{
			n++;
		}
		if (to_find[n] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

#include<stdio.h>
#include<string.h>
int main(void) {
    char a[] = "hello les amis";
    char b[] = "les";


    printf("%s <=> %s\n",b, ft_strstr(a,b));
    
    return (0);
}
