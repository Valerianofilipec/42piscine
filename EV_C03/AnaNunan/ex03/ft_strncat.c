/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:43:26 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/21 12:11:17 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	g;

	i = 0;
	g = 0;
	if (nb <= 0)
	{
		return (src);
	}
	while (dest[i])
		i++;
	while (src[g] && g < nb)
	{
		dest[i] = src[g];
		g++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* #include <stdio.h>
int main()
{
	char	dest[] = "anagregamor";
	char	src[] = "davi";
	printf ("%s", ft_strncat(src ,dest , 11));
} */