/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:13:18 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/01/23 15:51:08 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	count;
	int	diff;

	diff = 32;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] = str[count] - diff;
		}
		count++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char	str1[120] = "Hello World !";

	ft_strupcase(str1);
	printf("%s", str1);
	return (0);
}
*/
