/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 08:15:57 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/09 08:15:58 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
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
// 	char numeric[] = "0123456789";
// 	char *p_num;
// 	p_num = numeric;

// 	char special[] = "0123456789_";
// 	char *p_spe;
// 	p_spe = special;

// 	char empty[] = "";
// 	char *p_emp;
// 	p_emp = empty;

// 	printf("-----\n1 = String contains only numerical chars");
// 	printf("\n0 = String doesn't contain only numerical chars\n\n");
// 	printf("%s = %d\n", numeric, ft_str_is_numeric(p_num));
// 	printf("%s = %d\n", special, ft_str_is_numeric(p_spe));
// 	printf("Empty = %d\n-----\n", ft_str_is_numeric(p_emp));

// 	return (0);
// }