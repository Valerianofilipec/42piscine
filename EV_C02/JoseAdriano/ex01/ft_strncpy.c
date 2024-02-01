/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-da- <jose-da-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:34:59 by jose-da-          #+#    #+#             */
/*   Updated: 2024/01/24 19:39:35 by jose-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *scr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && scr[i] != '\0')
	{
		dest[i] = scr[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
