/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:18:56 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/23 12:05:05 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char str[20] = "Hello, world!";
    char dest[20];

    printf("Self made function: %u\n", ft_strlcpy(dest, str, 20));
	printf("%s\n", dest);
	printf("Stringh function: %lu", strlcpy(dest, str, 20));
    return (0);
}
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	len;

	len = 0;
	if (size > 0)
	{
		while (src[len] != '\0')
		{
			len++;
		}
		x = 0;
		while (src[x] != '\0' && x < (size - 1))
		{
			dest[x] = src[x];
			x++;
		}
	}
	dest[size] = '\0';
	return (len);
}
