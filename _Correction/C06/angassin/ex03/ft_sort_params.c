/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 21:53:26 by angassin          #+#    #+#             */
/*   Updated: 2021/09/22 21:53:29 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort(int argc, char **argv);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **str1, char **str2);
void	ft_putstr(char *str);

//displays args by number/alphabetical order
int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}

//sorts args by ascii value number of the first different char
void	ft_sort(int argc, char **argv)
{
	int	i;
	int	bool;

	bool = 1;
	while (bool)
	{
		bool = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				bool = 1;
			}
			i++;
		}	
	}
}

//compare strings and return 0 if the strings are the same 
//and a positive nb if not in ascending order
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

//print a string followed by a newline
void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
