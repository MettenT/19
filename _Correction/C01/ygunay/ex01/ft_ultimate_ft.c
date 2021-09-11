/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:37:33 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/09 14:38:21 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
    int nbr;
    int *ptr;
    int **ptr2;
    int ***ptr3;
    int ****ptr4;
    int *****ptr5;
    int ******ptr6;
    int *******ptr7;
    int ********ptr8;
    int *********ptr9;

    nbr= 40;
    ptr =&nbr;
    ptr2=&ptr;
    ptr3=&ptr2;
    ptr4=&ptr3;
    ptr5=&ptr4;
    ptr6=&ptr5;
    ptr7=&ptr6;
    ptr8=&ptr7;
    ptr9=&ptr8;

    ft_ultimate_ft(&ptr8);
    printf("%d\n",nbr);
           return 0;

}

