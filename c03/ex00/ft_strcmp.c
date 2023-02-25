/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:10:01 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/23 12:36:58 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "Hello guys";
	char	s2[] = "Hello guy";
	int n;
	
	n = ft_strcmp(s1, s2);
	printf("%d", n);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int len;

	len = 0;
	while (s1[len] == s2[len] && s1[len] != '\0' && s2[len] != '\0')
	{
		len++;
	}
	return (s1[len] - s2[len]);
	
}
