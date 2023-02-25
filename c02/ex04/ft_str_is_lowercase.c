/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:30:58 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/22 13:35:19 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	//char numbers[30] = "1, 2, 3, 4, 5, 6, 7, 8, 9";
	char str[11] = "abcdeA";

	ft_str_is_lowercase(str);
	return (0);
}
*/
int	ft_str_is_lowercase(char *str)
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
		if (!(str[x] >= 'a' && 'z' >= str[x]))
		{
			check = 0;
			break ;
		}
		x++;
	}
	return (check);
}
