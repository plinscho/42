/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_answer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dherrero <dherrero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:31:07 by dherrero          #+#    #+#             */
/*   Updated: 2023/02/19 20:13:40 by dherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_check_answer(int	**grid, int maxi, int *col);
void	ft_print_grid(int **grid, int x0, int ymax);

void	ft_move_fila(int *grid, int *comb)
{
	int	x;

	x = 1;
	while (x < 5)
	{
		grid[x] = comb[x - 1];
		x++;
	}
}

int	ft_loop_row1(int **grid, int **comb, int *col)
{
	int	x1;

	x1 = 0;
	while (x1 != 24)
	{
		ft_move_fila (grid[1], comb[x1]);
		if (ft_check_answer (grid, 4, col) == 0)
		{
			return (1);
		}
		x1++;
	}
	return (0);
}

int	ft_loop_row2(int **grid, int **comb, int *col)
{
	int	x2;

	x2 = 0;
	while (x2 != 24)
	{
		ft_move_fila (grid[2], comb[x2]);
		if (ft_loop_row1(grid, comb, col) == 1)
			return (1);
		x2++;
	}
	return (0);
}

int	ft_loop_row3(int **grid, int **comb, int *col)
{
	int	x3;

	x3 = 0;
	while (x3 != 24)
	{
		ft_move_fila (grid[3], comb[x3]);
		if (ft_loop_row2(grid, comb, col) == 1)
		{
			return (1);
		}
		x3++;
	}
	return (0);
}

int	ft_test_answer(int	**grid, int **comb, int *col)
{
	int	x4;

	x4 = 0;
	while (x4 != 24)
	{
		ft_move_fila (grid[4], comb[x4]);
		if (ft_loop_row3(grid, comb, col) == 1)
		{
			return (1);
		}
		x4++;
	}
	return (0);
}
