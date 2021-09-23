/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trigaud <trigaud@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:53:02 by trigaud           #+#    #+#             */
/*   Updated: 2021/09/21 18:53:15 by trigaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i] && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}

#include<stdio.h>
#include<string.h>
int main(void) {
    char a[30] = "Bon ben";
    char b[30] = "A ben";

    char c[] = "moi";
    
    ft_strncat(a,c, 1);
    strncat(b,c, 1);

    printf("%s <=> %s\n",a,b);
    return (0);
}
