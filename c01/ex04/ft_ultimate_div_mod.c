/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:52:19 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/19 11:15:21 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main (void)
{
	int x = 5;
	int y = 2;

	int *a;
	int *b;
	a = &x;
	b = &y;

	ft_ultimate_div_mod(a, b);
	printf("x / y  = %d\n",x );	
	return(0);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
