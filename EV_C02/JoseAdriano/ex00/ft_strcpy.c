/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-da- <jose-da-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:30:29 by jose-da-          #+#    #+#             */
/*   Updated: 2024/01/25 16:52:19 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *scr)
{
	int	i;

	i = -1;
	while (scr[i++] != '\0')
	{
		dest[i] = scr[i];
		++i
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int counter, char ***str)
	str[1]
{
}
