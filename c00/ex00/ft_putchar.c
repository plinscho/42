/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:23:51 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/16 16:33:41 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
	char c = 'a';
	ft_putchar(c);
	return (0);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}
