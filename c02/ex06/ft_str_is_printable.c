/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:42:52 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/22 13:45:48 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	//char numbers[30] = "1, 2, 3, 4, 5, 6, 7, 8, 9";
	char str[11] = "ABCA";

	ft_str_is_printable(str);
	return (0);
}
*/
int	ft_str_is_printable(char *str)
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
		if (!(str[x] >= 32 && 126 >= str[x]))
		{
			check = 0;
			break ;
		}
		x++;
	}
	return (check);
}
