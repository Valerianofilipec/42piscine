/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:31:09 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/20 22:23:29 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (0);
	i = 0;
	while ((i < (size - 1)) && (src[i] != 0))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	i = ft_strlen(src);
	return (i);
}
/*
// https://documentation.help/Cpp/strlcpy.htm
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char texto[] = "cinquent";
	int size = sizeof(texto)/sizeof(texto[0]);
	char *dest1 = (char*) malloc(sizeof(char)*2);
	char *dest2 = (char*) malloc(sizeof(texto));
	int r1 = ft_strlcpy(dest1,texto,2);
	int r2 = ft_strlcpy(dest2,texto,size);
	printf("%s -> %d\n%s  -> %d\n", dest1, r1, dest2, r2);
}
*/
