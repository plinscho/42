/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgecchel <cgecchel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:16:42 by cgecchel          #+#    #+#             */
/*   Updated: 2023/02/12 13:06:22 by cgecchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_b(int column, int max_column)
{
	ft_putchar('B');
	if (column == max_column)
	{
		ft_putchar('\n');
	}
}

void	print_c(int column)
{
	ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int max_column, int max_row)
{
	int	column;
	int	row;

	column = 0;
	row = 0;
	while (row <= max_row)
	{
		while (column <= max_column)
		{
			if (column == 0 && (row == 0 || row == max_row))
			{
				ft_putchar('A');
			}
			else if (column == max_column && (row == 0 || row == max_row))
			{
				print_c(column);
			}
			else if (((row == 0 || row == max_row) && (column > 0 || column < max_column)) || ((row != 0 || row < max_row) && (column == 0 || column == max_column)))
			{
				print_b(column, max_column);
			}
			else
			{
				ft_putchar(' ');
			}
			column++;
		}
		column = 0;
		row++;
	}
}  
