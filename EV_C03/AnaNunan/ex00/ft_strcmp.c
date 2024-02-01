/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:11:41 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/21 13:08:06 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
#include <stdio.h>

int	main()
{
	char *s1 = "ANA";
	char *s2 = "ANA";
	printf ("resultado: %i", ft_strcmp(s1,s2));
	printf(" r2: %i", strcmp(s1, s2));
}
