/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:29:51 by mbuchet           #+#    #+#             */
/*   Updated: 2021/09/11 17:31:13 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n > -1)
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(5);
// 	return (0);
// }
