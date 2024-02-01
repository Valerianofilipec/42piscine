/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgomes-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:51:12 by cgomes-e          #+#    #+#             */
/*   Updated: 2024/01/29 13:41:08 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < size && dest[i] != '\0')
		i++;
	if (i > size)
	{
		while (src[j])
		{
			j++;
		}
		return (size + j);
	}
	j = 0;
	while (src[j] != '\0' && (i + j) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (i + j);
}

int	main(void)
{
	char	str[] = "Hello";
	char	dest[] = "qwertyuio";
	char	*ptr1;
	char	*ptr2;

	ptr1 = &dest[0];
	ptr2 = &str[0];
	ft_strlcat(ptr1, ptr2, 14);
	printf("%s", dest);
}
