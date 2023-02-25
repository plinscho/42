/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_answer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dherrero <dherrero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:12:29 by dherrero          #+#    #+#             */
/*   Updated: 2023/02/19 20:14:14 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_checksum_row(int **grid);
int	ft_checksum_col(int **grid);

int	ft_check_minus(int num, int *grid, int max)
{
	int	x;
	int	tot;
	int	top;

	tot = 1;
	x = max;
	top = 0;
	while (grid[x] != 4)
	{
		if (grid[x] > top)
		{
			top = grid[x];
		}
		if (grid[x -1] > top)
		{
			tot++;
		}
		x--;
	}
	if (num != tot)
	{
		return (1);
	}
	return (0);
}

int	ft_check_add(int num, int *grid)
{
	int	x;
	int	tot;
	int	top;

	tot = 1;
	x = 1;
	top = 0;
	while (grid[x] != 4)
	{
		if (grid[x] > top)
		{
			top = grid[x];
		}
		if (grid[x + 1] > top)
		{
			tot++;
		}
		x++;
	}
	if (num != tot)
	{
		return (1);
	}
	return (0);
}

int	*ft_getcol(int **grid, int *col, int ncol)
{
	int	y;

	y = 0;
	while (y < 6)
	{
		col[y] = grid[y][ncol];
		y++;
	}
	return (col);
}

int	ft_check_answer(int **grid, int max, int *col)
{
	int	x;
	int	y;

	y = 1;
	while (y <= max)
	{
		if (ft_check_add(grid[y][0], grid[y]) == 1)
			return (1);
		if (ft_check_minus(grid[y][max + 1], grid[y], max) == 1)
			return (1);
		y++;
	}
	x = 1;
	while (x <= max)
	{
		if (ft_check_add(grid[0][x], ft_getcol(grid, col, x)) == 1)
			return (1);
		if (ft_check_minus(grid[max + 1][x], ft_getcol(grid, col, x), max) == 1)
			return (1);
		x++;
	}
	if ((ft_checksum_row(grid) == 1) || (ft_checksum_col(grid) == 1))
		return (1);
	return (0);
}

/*int main(void)
{
	int **grid;
	int x;
	int *col;

	grid = malloc(6*8);
	col = malloc (6 * 4);
	x = 0;
	while (x <6)
	{
		grid[x] = malloc(6*4);
		x++;
	}

	grid[0][0]=0;
	grid[0][1]=2;
	grid[0][2]=2;
	grid[0][3]=1;
	grid[0][4]=4;
	grid[0][5]=0;

	grid[1][0]=3;
	grid[1][1]=2;
	grid[1][2]=3;
	grid[1][3]=4;
	grid[1][4]=1;
	grid[1][5]=2;

	grid[2][0]=2;
	grid[2][1]=1;
	grid[2][2]=4;
	grid[2][3]=3;
	grid[2][4]=2;
	grid[2][5]=3;

	grid[3][0]=1;
	grid[3][1]=4;
	grid[3][2]=2;
	grid[3][3]=1;
	grid[3][4]=3;
	grid[3][5]=2;

	grid[4][0]=2;
	grid[4][1]=3;
	grid[4][2]=1;
	grid[4][3]=2;
	grid[4][4]=4;
	grid[4][5]=1;

	grid[5][0]=0;
	grid[5][1]=2;
	grid[5][2]=3;
	grid[5][3]=3;
	grid[5][4]=1;
	grid[5][5]=0;

	if (ft_check_answer(grid,4, col) == 1)
	{
		write (1, "MAL\n", 4);
	}
	else
	{
		write(1, "OK\n", 3);
	}
}*/
