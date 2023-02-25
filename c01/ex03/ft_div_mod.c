/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:32:36 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/19 11:12:35 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	
	int x;
	int y;
	int div = 0;
	int mod = 0;

	x = 10;
	y = 3;
	ft_div_mod(x, y, &div, &mod);
	printf("div_res: %d, mod_res: %d", div, mod);
	return (0);	
}
*/
