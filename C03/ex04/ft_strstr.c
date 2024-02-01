/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:32:21 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/23 15:35:13 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		i = 0;
		while (to_find[i] == str[i])
		{
			if (to_find[i + 1] == 0)
				return (str);
			i++;
		}
		str++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int c, char **str)
{
    (void) c;
    printf("haystack -> %s\t|\tneedle -> %s\n", str[1], str[2]);
    printf("ft_strstr -> %s \n", ft_strstr(str[1], str[2]));

    printf("haystack -> %s\t|\tneedle -> %s\n", str[1], str[2]);
    printf("strstr -> %s \n", strstr(str[1], str[2]));

    
}
*/
