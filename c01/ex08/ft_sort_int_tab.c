/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:58:29 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/21 16:06:12 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int str[11];
	int i;
	int size;

	i = 0;
	size = 10;
	while (i < 11)
	{
		str[i] = size - i;
		i++;
		printf("%d ", str[i-1]);
	}
	printf("\nApplying function:\n");

	ft_sort_int_tab(str, 10);

	i = 0;
	while (i < size)
	{
		printf("%d ", str[i]);
		i++;
	}
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size - j - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}
