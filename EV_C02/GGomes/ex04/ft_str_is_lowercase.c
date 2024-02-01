/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:53:30 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/01/23 14:10:37 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'a' || str[count] > 'z')
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char	str1[130] = "hellO";
	int	a;

	a = ft_str_is_lowercase(str1);
	printf("%d", a);
	return (0);
}
*/
