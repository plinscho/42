/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dherrero <dherrero@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:57:00 by dherrero          #+#    #+#             */
/*   Updated: 2023/02/19 20:14:22 by dherrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_checksum_row(int **grid)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y < 5)
	{
		if (grid[y][1] == grid[y][2])
			return (1);
		if (grid[y][1] == grid[y][3])
			return (1);
		if (grid[y][1] == grid[y][4])
			return (1);
		if (grid[y][2] == grid[y][3])
			return (1);
		if (grid[y][2] == grid[y][4])
			return (1);
		if (grid[y][3] == grid[y][4])
			return (1);
		y++;
	}
	return (0);
}

int	ft_checksum_col(int **grid)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (x < 5)
	{
		if (grid[1][x] == grid[2][x])
			return (1);
		if (grid[1][x] == grid[3][x])
			return (1);
		if (grid[1][x] == grid[4][x])
			return (1);
		if (grid[2][x] == grid[3][x])
			return (1);
		if (grid[2][x] == grid[4][x])
			return (1);
		if (grid[3][x] == grid[4][x])
			return (1);
		x++;
	}
	return (0);
}
