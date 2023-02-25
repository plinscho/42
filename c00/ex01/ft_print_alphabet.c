/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:57:53 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/16 16:35:30 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

int	main(void)
{	
	ft_print_alphabet();
	return (0);
}


void	ft_print_alphabet(void)
{
	char	b;

	b = 'a';
	while (b <= 'z')
	{
		write(1, &b, 1);
		b++;
	}
}
