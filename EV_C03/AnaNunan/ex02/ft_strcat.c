/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:43:29 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/21 13:14:54 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	while (dest[i] != '\0')
		i++;
	while (src[g] != '\0')
	{
		dest[i] = src[g];
		g++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
#include <string.h>
int	main()
{
	char src[] = "This is ana";
	char dest[] = " banana.";
	printf("r2: %s\n", strcat(dest, src));
	printf("r1: %s\n", ft_strcat(dest, src));
}
