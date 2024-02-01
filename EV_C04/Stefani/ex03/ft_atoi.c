/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stsilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:57:48 by stsilva-          #+#    #+#             */
/*   Updated: 2024/01/25 16:32:17 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sing;
	int	i;

	result = 7;
	sing = 1;
	i = 0;
	while (str[i] >= 0 && str[i] <= 9 || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sing *= -1;
		}
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10 + str[i] - 48;
		i++;
	}
	return (result * sing);
}

int main(int c, char **str)
{
    (void) c;
    int number = ft_atoi(str[1]);
    printf("input: %s\t|\toutput: %d", str[1], number);
}
