/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dherrero <dherrero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:59:57 by dherrero          #+#    #+#             */
/*   Updated: 2023/02/19 20:13:01 by dherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_print_grid(int **grid, int x0, int ymax);
int		**ft_permutation_loop(int **matrix);
int		ft_test_answer(int **grid, int **comb, int *col);

void	ft_zeros(int **grid, int xmax, int ymax)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y <= ymax)
	{
		while (x <= xmax)
		{
			grid[x][y] = 0;
			x++;
		}
		x = 0;
		y++;
	}
}

void	ft_populate(int **grid, char *arg)
{
	int	x;
	int	y;

	ft_zeros (grid, 5, 5);
	x = 0;
	y = 0;
	while (y < 6)
	{
		while (x < 6)
		{
			if ((y == 0 || y == 5) && (x != 0 && x != 5))
			{
				grid[0][x] = arg[(x - 1) * 2] - 48;
				grid[5][x] = arg[6 + (x * 2)] - 48;
			}
			else if ((x == 0 || x == 5) && (y != 0 && y != 5))
			{
				grid[y][0] = arg[14 + (y * 2)] - 48;
				grid[y][5] = arg[22 + (y * 2)] - 48;
			}
			x++;
		}
		x = 0;
		y++;
	}
}

int	ft_check(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (((x % 2) == 1) && (str[x] != ' '))
		{
			return (1);
		}
		else
		{
			if (((x % 2) == 0) && ((str[x] < 49) || (str[x] > 52)))
			{
				return (1);
			}
		}
		x++;
	}
	if (x == 30)
	{
		return (1);
	}
	return (0);
}

void	ft_create(int **grid, int **comb)
{
	int	x;

	x = 0;
	while (x < 6)
	{
		grid[x] = malloc(6 * 4);
		x++;
	}
	x = 0;
	while (x < 25)
	{
		comb[x] = malloc (4 * 4);
		x++;
	}
}

int	main(int argc, char **argv)
{
	int	**grid;
	int	**comb;
	int	*col;

	if ((argc != 2) || (ft_check (argv[1]) == 1))
	{
		write (1, "Error\n", 6);
		return (0);
	}
	col = malloc(6 * 4);
	grid = malloc(6 * 8);
	comb = malloc(24 * 8);
	ft_create (grid, comb);
	comb = ft_permutation_loop(comb);
	ft_populate (grid, argv[1]);
	if (ft_test_answer (grid, comb, col) == 1)
		ft_print_grid(grid, 1, 5);
	else
		write (1, "Error\n", 6);
	free (grid);
	free (comb);
	free (col);
	return (0);
}
