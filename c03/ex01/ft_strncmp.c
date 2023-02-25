/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:36:10 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/23 15:58:37 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "Hello guys";
	char	s2[] = "Hello guy";
	unsigned int	n;
	unsigned int	a;

	a = 5;
	n = ft_strncmp(s1, s2, a);
	printf("%d", n);
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int len;

	len = 0;
	while (s1[len] == s2[len] && s1[len] != '\0' && s2[len] != '\0')
	{
		if (len == n)
			break;
		
		len++;
	}
	return (s1[len] - s2[len]);

}
