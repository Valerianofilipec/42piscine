/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:38:59 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/01/23 15:49:36 by ggomes-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 'A' || str[count] > 'Z') 
			&& (str[count] < 'a' || str[count] > 'z'))
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
	char	str1[130] = "  ";
	int	a;

	a = ft_str_is_alpha(str1);
	printf("%d", a);
	return (0);
	
}
*/
