/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:29:30 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/01/23 15:46:57 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] > 126)
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
	char	str1[120] = "Hello";
	int	a;

	a = ft_str_is_printable(str1);
	printf("%d", a);
	return (0);
}
*/
