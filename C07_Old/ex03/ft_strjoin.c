/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:00:52 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/29 13:57:09 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

	if (size == 0)
	{
		strcat = (char *) malloc(1);
		return (strcat);
	}
	i = -1;
	nbytes = (size - 1) * ft_strlen(sep);
	while (++i < size)
		nbytes += (ft_strlen(strs[i]));
	strcat = (char *) malloc(nbytes);
	i = -1;
	while (++i < size)
	{
		strcat = ft_strcat(strcat, strs[i]);
		if (i < (size - 1))
			strcat = ft_strcat(strcat, sep);
	}
	return (strcat);
}
