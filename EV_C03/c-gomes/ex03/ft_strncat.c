/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgomes-e <cgomes-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:59:59 by cgomes-e          #+#    #+#             */
/*   Updated: 2024/01/29 13:27:29 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0' && nb > 0)
	{
		dest[i + j] = src[j];
		j++;
		nb--;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	main(void)
{
	char	str[] = "World";
	char	dest[] = "Hello";
	char	*ptr1;
	char	*ptr2;

	ptr1 = &dest[0];
	ptr2 = &str[0];
	ft_strncat(ptr1, ptr2, 2);
	printf("%s", dest);
}
