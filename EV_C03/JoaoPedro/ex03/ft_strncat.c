/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-se <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:12:19 by jdias-se          #+#    #+#             */
/*   Updated: 2024/01/23 13:04:09 by jdias-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	i;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	while (x < nb && src[x])
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = 0;
	return (dest);
}

/*int	main(void)
{
	char	d[] = "Hello";
	char	f[] = " World";
	int	i = 0;
	ft_strncat(d, f, 6);
	while (d[i])
	{
		write(1, &d[i], 1);
		i++;
	}
}*/
