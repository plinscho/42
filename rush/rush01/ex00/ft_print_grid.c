/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:11:14 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/19 20:20:33 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_put_int(int x);

void	ft_print_grid(int **grid, int x0, int ymax)
{
	int	i;
	int	j;

	i = x0;
	j = x0;
	while (i < ymax)
	{
		j = x0;
		while (j < ymax)
		{
			ft_put_int(grid[i][j]);
			if (j < 4)
				write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	ft_put_int(int x)
{
	char	a;

	a = x + 48;
	write(1, &a, 1);
}
