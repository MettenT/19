/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmetten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:06:11 by tmetten           #+#    #+#             */
/*   Updated: 2021/09/06 12:06:12 by tmetten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint (char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{

}

int	main()
{
	ft_putnbr(5);
}