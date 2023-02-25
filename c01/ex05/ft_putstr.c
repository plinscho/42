/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:30:42 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/21 18:33:03 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void    ft_putstr(char *str);

int main(void)
{	
	char *str1 = "Hello world!";	
	ft_putstr(str1);

	return (0);
}
*/

void	ft_putstr(char *str)
{
	int	buffer;

	buffer = 0;
	while (str[buffer] != '\0')
	{
		buffer++;
	}
}
