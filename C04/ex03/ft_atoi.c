/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:44:18 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/25 14:36:01 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	signal;
	int	number;

	signal = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	number = 0;
	while (*str && *str < 58 && *str > 47)
	{
		number *= 10;
		number += (*str - 48);
		str++;
	}
	return (signal * number);
}
/*
#include <stdio.h>

int main(int c, char **str)
{
    (void) c;
    int number = ft_atoi(str[1]);
    printf("input: %s\t|\toutput: %d", str, number);
}
*/
