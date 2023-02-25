/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:55:35 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/22 13:20:12 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char str[20] = "Hello, world!";
    char dest[20];

    printf("%s", ft_strcpy(dest, str));
    return (0);
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
