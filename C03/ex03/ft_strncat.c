/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:22:37 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/23 15:30:57 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	int				i;

	i = -1;
	j = 0;
	while (dest[++i])
		;
	while (j < nb && src[j])
		dest[i++] = src[j++];
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
    printf("ft_strncat -> %s \n", ft_strncat(dest, src, atoi(str[3])));

   
   // dest = str[1];
   // printf("dest -> %s\t|\tsrc -> %s\n", dest, str[2]);
   // printf("strncat -> %s \n", strncat(dest, src, atoi(str[3])));
   //zsh: illegal hardware instruction  ./a.out "c" "bb" 1
}
*/
