/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:00:30 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/23 16:30:22 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	s1[40] = "Hello guys";
	char	s2[] = "My name is patata";

	ft_strcat(s1, s2);
	printf("%s", s1);
	return (0);
}

char    *ft_strcat(char *dest, char *src)
{
	int lend;
	int lens;

	
	lend = 0;
	while (dest[lend] != '\0')
	{
		lend++;
	}
	

	lens = 0;
	while (src[lens] != '\0')
	{
		dest[lend] = src[lens];
		lens++;
		lend++;
	}
	return (dest);
}
