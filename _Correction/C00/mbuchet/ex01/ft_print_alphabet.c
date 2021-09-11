/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:29:38 by mbuchet           #+#    #+#             */
/*   Updated: 2021/09/11 17:33:34 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_alphabet(void)
{
	char	ch;

	ch = 'a';
	while (ch <= 'z')
	{
		write(1, &ch, 1);
		ch++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
