/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:54:42 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/29 12:56:14 by vcalolog         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	str = (char *) malloc(ft_strlen(src) + 1);
	i = -1;
	while (src[++i])
		str[i] = src[i];
	str[i] = 0;
	return (str);
}
