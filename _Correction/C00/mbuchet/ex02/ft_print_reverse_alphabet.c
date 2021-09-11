/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:33:07 by mbuchet           #+#    #+#             */
/*   Updated: 2021/09/11 17:33:35 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch;

	ch = 'z';
	while (ch >= 'a')
	{
		write(1, &ch, 1);
		ch--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
