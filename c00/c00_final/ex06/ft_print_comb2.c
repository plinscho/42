/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:25:25 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/16 19:49:39 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x < 100)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_putchar (x / 10 + '0');
			ft_putchar (x % 10 + '0');
			write (1, " ", 1);
			ft_putchar (y / 10 + '0');
			ft_putchar (y % 10 + '0');
			if (x == 98 && y == 99)
				write (1, "\n", 1);
			else
				write (1, ", ", 2);
			y++;
		}
	x++;
	}
}

int main(void)
{

		ft_print_comb2();
		return (0);
}
