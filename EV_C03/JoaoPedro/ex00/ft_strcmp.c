/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-se <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:41:54 by jdias-se          #+#    #+#             */
/*   Updated: 2024/01/25 15:06:46 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{ZZ
	char	a[] = "123";
	char	b[] = "12";
	char	c[] = "113";
	int	x;
	int	y;

	x = ft_strcmp(a, b) + '0';
	y = ft_strcmp(a, c) + '0';
	write(1, &x, 1);
	write(1, "\n", 1);
	write(1, &y, 1);
	
}*/
