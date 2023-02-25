/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:10:51 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/22 14:36:43 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	//char numbers[30] = "1, 2, 3, 4, 5, 6, 7, 8, 9";
	char str[] = "holaN 16161 avId";

	printf("%s", ft_strupcase(str));
	return (0);
}
*/
char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && 'z' >= str[x]))
		{
			str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
