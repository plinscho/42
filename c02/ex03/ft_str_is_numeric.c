/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:22:10 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/22 13:30:28 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	//char numbers[30] = "1, 2, 3, 4, 5, 6, 7, 8, 9";
	char str[11] = "0123a56789";

	ft_str_is_numeric(str);
	return (0);
}
*/
int	ft_str_is_numeric(char *str)
{
	int	x;
	int	check;

	check = 1;
	x = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0')
	{
		if (!(str[x] >= '0' && '9' >= str[x]))
		{
			check = 0;
			break ;
		}
		x++;
	}
	return (check);
}
