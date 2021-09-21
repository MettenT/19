/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 19:52:44 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/08 19:52:44 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z')
			|| ('A' <= str[i] && str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}	
	return (1);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char alpha[] = "ABCDEFGHIJKlmnopqrstuvwxyz";
// 	char *p_alp;
// 	p_alp = alpha;

// 	char special[] = "ABC abc áéíóú àèìòù{}[]!?@#$&* wxyz WXYZ";
// 	char *p_spe;
// 	p_spe = special;

// 	char empty[] = "";
// 	char *p_emp;
// 	p_emp = empty;

// 	printf("-----\n1 = String contains only alphabetical gccchars");
// 	printf("\n0 = String doesn't contain only alphabetical chars\n\n");
// 	printf("%s = %d\n", alpha, ft_str_is_alpha(p_alp));
// 	printf("%s = %d\n", special, ft_str_is_alpha(p_spe));
// 	printf("Empty = %d\n-----\n", ft_str_is_alpha(p_emp));

// 	return (0);
// }