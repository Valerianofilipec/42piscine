/* ************************************************************************** */
i++;
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:52:54 by tda-cost          #+#    #+#             */
/*   Updated: 2024/02/01 13:17:42 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strlen_total(int size, char **argv, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total = total + ft_strlen(argv[i]);
		i++;
	}
	total = total + (ft_strlen(sep) * (size - 1));
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		totallen;
	char	*dest;

	if (size == 0)
	{
		return (malloc(sizeof(char)));
	}
	i = 0;
	totallen = ft_strlen_total(size, strs, sep);
	dest = (char *) malloc (totallen * sizeof (char) + 1); 
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i != size - 1)
		{
			ft_strcat(dest, sep);
		}
		i++;
	}
	return (dest);
}
/*
int     main(void)
{
	char    *sep;
	char    *dest[4];
	char	*d;

	dest[0] = "HEllo";
	dest[1] = "World";
	dest[2] = "test";
	dest[3] = "test2";
	sep = "_,_";
	d = ft_strjoin(4, dest, sep);
	printf("%s", d);
	free (d);
}*/
