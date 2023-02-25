/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:34:27 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/19 11:21:21 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *string);

int	main(void)
{
	char *str = "Hello, world!";
	int size;

	size = ft_strlen(str);
    printf("The lenght of str is: %d\n", size);
}
*/

int	ft_strlen(char *string)
{
	int	len;

	len = 0;
	while (string[len] != '\0')
	{
		len++;
	}
	return (len);
}	
