/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:54:10 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/21 13:28:17 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int str[10];
	int i;
	int size;
	
	i = 0;
	size = 9;
	while (i < size)
	{
		str[i] = i;
		i++;
		printf(" %d", str[i-1]);
	}
	printf("\nApplying function:\n");
	
	ft_rev_int_tab(str, 9);
	
	i = 0;
	while (i < size)
	{
		printf("%d ", str[i]);
		i++;
	}
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = temp;
		i++;
	}
}
