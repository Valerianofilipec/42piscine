/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:18:23 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/23 15:22:14 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = -1;
	while (dest[++i])
		;
	while (*src)
	{
		dest[i++] = *src;
		src++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int c, char **str)
{
    (void) c;
    char *src = str[2];
    char *dest = (char *) malloc(sizeof(str[1]) + sizeof(str[2]));
    dest = str[1];
    printf("dest -> %s\t|\tsrc -> %s\n", dest, src);
    printf("ft_strcat -> %s \n", ft_strcat(dest, src));

    
    //dest = str[1];
    //printf("dest -> %s\n", dest);
    //printf("strcat -> %s \n", strcat(dest, src));
    //something is off (it doesnt running on my pc)
}
*/
