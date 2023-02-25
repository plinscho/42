/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:42:34 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/22 15:18:02 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	//char numbers[30] = "1, 2, 3, 4, 5, 6, 7, 8, 9";
	char str[] = "salut, com/nt tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
*/
char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && 'z' >= str[x]))
		{
			if (!((str[x - 1] >= 'a' && 'z' >= str[x - 1])))
			{
				if (!((str[x - 1] >= 'A' && 'Z' >= str[x - 1])))
				{
					if (!((str[x - 1] >= '0' && '9' >= str[x - 1])))
						str[x] = str[x] - 32;
				}
			}
		}
		x++;
	}
	return (str);
}
