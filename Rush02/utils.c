/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:15:59 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/28 20:27:38 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "limits.h"

unsigned long	ft_atoi(char *nbr)
{
	unsigned long	number;

	number = 0;
	while (*str && *str < 58 && *str > 47)
	{
		number *= 10;
		number += (*str - 48);
		str++;
	}
	return (number);
}

unsigned long	ft_pow(int nbr, int power)
{
	unsigned long	r;

	if (power < 0)
		return (0);
	r = 1;
	while (power-- > 0)
		r *= nbr;
	return (r);
}

void	ft_putnbr(char *str, unsigned long nbr)
{
	int	size;

	size = ft_strlen(str) - 1;
	if (nbr > 9)
	{
		ft_putnbr(str, nbr / 10);
		ft_putnbr(str + size, nbr % 10);
	}
	else
		*str = nbr + 48;
}

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}
