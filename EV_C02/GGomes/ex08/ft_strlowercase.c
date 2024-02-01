/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:46:55 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/01/23 14:17:12 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowercase(char *str)
{
	int	count;
	int	diff;

	diff = 32;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] = str[count] + diff;
		}
		count++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char	str1[120] = "HELLO WORLD !";

	ft_strlowercase(str1);
	printf("%s", str1);
	return (0);
}
*/
