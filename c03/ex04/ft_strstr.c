/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:11:44 by plinscho          #+#    #+#             */
/*   Updated: 2023/02/24 13:35:08 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strstr(char *str, char *to_find);

int main(void)
{
    char    s1[] = "Hello guys, my name is Paulus Linshcoten";
    char    s2[] = "Paulus";

    printf("%s",ft_strstr(s1, s2));
    return (0);
}

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    int k;

    if (to_find[0] == str[0])
        return str;

    i = 0;
    while (to_find[i] != '\0')
        i++;

    j = 0;
    while (str[j] != '\0')
    {
        if (str[j] == to_find[0])
        {
            k = 0;
            while ( k != i)
            {
                if (str[j + k] == to_find[k])
                    k++;
				else if (str[j + k] == to_find[k])
				{
                      return str += j;
                	else
                	{
                  		j++;
                  		break;
                	}
				}
            }
          }
    j++;
    }
    return (NULL);
}
