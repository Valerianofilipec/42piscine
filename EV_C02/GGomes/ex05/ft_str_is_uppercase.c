/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:15:55 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/01/23 15:46:29 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'A' || str[count] > 'Z')
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
	char	str1[130] = "L0";
	int	a;

	a = ft_str_is_uppercase(str1);
	printf("%d", a);
	return (0);
}
*/
