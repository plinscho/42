/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_permutation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:57:26 by rjobert           #+#    #+#             */
/*   Updated: 2023/02/19 15:52:36 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_init_array(int end, int arr[4]);
int		ft_condition(int x, int y, int z, int t);
void	ft_populate_grid(int **matrix, int arr[4], int row, int col);
void	ft_loop(int *arr, int **matrix, int i);

int	**ft_permutation_loop(int **matrix)
{
	int	arr[4];

	ft_init_array(4, arr);
	ft_loop(arr, matrix, 0);
	return (matrix);
}

void	ft_init_array(int end, int arr[4])
{
	int	i;

	i = 0;
	while (i < end)
	{
		arr[i] = i + 1;
		i++;
	}
}

int	ft_condition(int x, int y, int z, int t)
{
	if (x != y && y != z && z != t && x != z && x != t && y != t)
		return (1);
	else
		return (0);
}

void	ft_populate_grid(int **matrix, int arr[4], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		matrix[row][i] = arr[i];
		i++;
	}
}

void	ft_loop(int *arr, int **matrix, int i)
{
	while (arr[0] <= 4)
	{
		arr[1] = 1;
		while (arr[1] <= 4)
		{
			arr[2] = 1;
			while (arr[2] <= 4)
			{
				arr[3] = 1;
				while (arr[3] <= 4)
				{
					if (ft_condition(arr[0], arr[1], arr[2], arr[3]))
					{
						ft_populate_grid(matrix, arr, i, 4);
						i++;
					}
					arr[3] += 1;
				}
				arr[2] += 1;
			}
			arr[1] += 1;
		}
		arr[0] += 1;
	}
}
