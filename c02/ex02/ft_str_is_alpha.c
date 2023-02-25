/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:09:31 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/22 13:18:32 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_str_is_alpha(char *str);
int	ft_strlen(char *str);

int	main(void)
{
	//char numbers[30] = "1, 2, 3, 4, 5, 6, 7, 8, 9";
	char str[28] = "abcdefghijklmnopqrstuz";

	ft_str_is_alpha(str);
	return (0);
}
*/
int	ft_str_is_alpha(char *str)
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
		if (!(str[x] >= 'A' && 'Z' >= str[x]))
		{
			if (!(str[x] >= 'a' && 'z' >= str[x]))
			{
				check = 0;
				break ;
			}
		}
		x++;
	}
	return (check);
}
