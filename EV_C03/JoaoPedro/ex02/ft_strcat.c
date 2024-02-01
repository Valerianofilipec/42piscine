/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-se <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:12:03 by jdias-se          #+#    #+#             */
/*   Updated: 2024/01/22 09:52:24 by jdias-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
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
	char	d[] = "hello";
	char	f[] = " word";
	int	i;

	ft_strcat(d, f);
	i = 0;
	while (d[i])
	{
		write(1, &d[i], 1);
		i++;
	}

}*/
