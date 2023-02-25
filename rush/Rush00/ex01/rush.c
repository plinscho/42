/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgecchel <cgecchel@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:16:42 by cgecchel          #+#    #+#             */
/*   Updated: 2023/02/12 16:12:51 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_b(int column, int max_column)
{
	ft_putchar('*');
	if (column == max_column)
	{
		ft_putchar('\n');
	}
}

void	print_c(int column)
{
	ft_putchar('/');
	ft_putchar('\n');
}

void	check(int col, int m_col, int rw, int m_row)
{
	if (col == 0 && (rw == 0 || rw == m_row))
	{
		ft_putchar(92);
	}
	else if (col == m_col && (rw == 0 || rw == m_row))
	{
		print_c(col);
	}
	else if (((rw == 0 || rw == m_row)))
	{
		print_b(col, m_col);
	}
	else if (((rw != 0 || rw < m_row) && (col == 0 || col == m_col)))
	{
		print_b(col, m_col);
	}
	else
	{
		ft_putchar(' ');
	}
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
			check(column, max_column, row, max_row);
			column++;
		}
		column = 0;
		row++;
	}
}
