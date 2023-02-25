/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:45:50 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/23 17:29:00 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	s1[40] = "Hello guys";
	char	s2[] = "My name is patata";
	unsigned int	n;

	n = 7;
	ft_strncat(s1, s2, n);
	printf("%s", s1);
	return (0);
}

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int lend;
	unsigned int lens;


	lend = 0;
	while (dest[lend] != '\0')
	{
		lend++;
	}


	lens = 0;
	while (src[lens] != '\0')
	{
		if (lens == nb)
			break;

		dest[lend] = src[lens];
		lens++;
		lend++;
	}
	return (dest);
}
