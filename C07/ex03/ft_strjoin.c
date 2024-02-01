/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:00:52 by vcalolog          #+#    #+#             */
/*   Updated: 2024/02/01 17:58:03 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strcat;
	int		nbytes;
	int		i;
	int		sep_size;

	if (size == 0)
	{
		strcat = (char *) malloc(sizeof(char) * 2);
		return (strcat);
	}
	sep_size = ft_strlen(sep);
	nbytes = (size - 1) * sep_size;
	i = -1;
	while (++i < size)
		nbytes += (ft_strlen(strs[i]));
	strcat = (char *) malloc(sizeof(char) * (1 + nbytes));
	i = -1;
	nbytes = -1;
	while (++i < size)
	{
		while (*strs[i])
		{
			strcat[++nbytes] = *strs[i];
			*strs++;
		}
		if (i < (size - 1))
		{
			strcat = ft_strcat(strcat, sep);
			nbytes += 
		}
	}
	return (strcat);
}
/*
int     main(void)
{
        char    *sep;
        char    *dest[4];
        char    *d;

        dest[0] = "HEllo";
        dest[1] = "World";
        dest[2] = "test";
        dest[3] = "test2";
        sep = "_,_";
        d = ft_strjoin(4, dest, sep);
        printf("%s", d);
        free (d);
}
*/
