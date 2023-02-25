/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:02:36 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/22 12:07:53 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char str[20] = "Hello, world!";
    char dest[20];
	unsigned int arr_size;
	
	arr_size = 5;
	ft_strncpy(dest, str, arr_size);
	printf("%s", dest);
	return (0);
}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
