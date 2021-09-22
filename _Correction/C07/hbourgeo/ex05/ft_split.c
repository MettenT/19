/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:34:20 by hbourgeo          #+#    #+#             */
/*   Updated: 2021/09/21 13:56:01 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_strtok(char *str, char *delim)
{	
	int	j;
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] != delim[j] && delim[j])
			j++;
		if (str[i] == delim[j])
			str[i] = delim[0];
		i++;
	}
	strs = malloc(sizeof(int) * i));
	if (strs == NULL)
		return (0);
	while (k != i)
	{
		strs[i] = malloc(sizeof(int) * j);
		if (strs[i] == NULL)
			return (0);
		k++;
	}
}

// int main ()
// {

// 	str = ft_strtok(str, " ");

// 	char **huhu;
// 	ft_strtok("coucouPjePRsuisOUTunPTpetitRUOTPblagueur.", "PROUT");
// 	// int i = 0;
// 	// while (i < 7)
// 	// {
// 	// 	printf("%s ", huhu[i++]);
// 	// }

// return (0);
// }