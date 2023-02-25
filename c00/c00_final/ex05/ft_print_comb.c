/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:22:32 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/16 13:45:03 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	num_0;
	char	num_1;
	char	num_2;

	num_0 = '0';
	while (num_0 <= '7')
	{
		num_1 = num_0 + 1;
		while (num_1 <= '8')
		{
			num_2 = num_1 + 1;
			while (num_2 <= '9')
			{
				ft_putchar(num_0, num_1, num_2);
				num_2++;
			}
		num_1++;
		}
	num_0++;
	}
}
