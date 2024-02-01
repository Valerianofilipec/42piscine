/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:28:42 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/01/23 14:08:36 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < '0' || str[count] > '9')
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
	char	str1[130] = "123";
	int	a;

	a = ft_str_is_numeric(str1);
	printf("%d", a);
	return (0);
}
*/
