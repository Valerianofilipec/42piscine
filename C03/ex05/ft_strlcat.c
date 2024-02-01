/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:35:38 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/23 16:17:30 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = -1;
	while (dest[i])
		i++;
	while (i < size && src[++j])
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = 0;
	return (i);
}
/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int c, char **str)
{
    (void) c;

    char *src = str[2];

    char *dest = (char *) malloc(sizeof(char)*atoi(str[3]));
    dest = str[1];
    char *dest2 = (char *) malloc(sizeof(char)*atoi(str[3]));
    //int i = 0;
    //while(*str[1])
    //{
    //    dest2[i++] = *str[1];
    //    str[1]++;
    //}
    //dest2[i] = 0;
    
    dest2 = str[1];
    printf("dest2 -> %s\t|\tsrc -> %s\n", dest2, src);
   // unsigned int r2 = strlcat(dest2, src, (unsigned int) atoi(str[3]));
    //printf("strlcat -> %s\t%i\n", dest2, r2);

    printf("dest -> %s\t|\tsrc -> %s\n", dest, src);
    int r1 = ft_strlcat(dest, src, (unsigned int) atoi(str[3]));
    printf("ft_strlcat -> %s\t%i\n", dest, r1);
}
*/
