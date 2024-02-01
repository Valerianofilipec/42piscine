/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:06:49 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/25 16:03:43 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

bool	ft_checkbase(char *base)
{
	int	i;

	if (!(*base) || !(*(base + 1)))
		return (false);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (false);
		i = 0;
		while (base[++i])
		{
			if (*base == base[i])
				return (false);
		}
		base++;
	}
	return (true);
}

int	ft_index(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_pow(int base, int expoent)
{
	int	r;

	r = base;
	if (expoent == 0)
		return (1);
	while (--expoent > 0)
		r *= r;
	return (r);
}

int	ft_aux(char *str, char *base)
{
	int	n_base;
	int	n_str;
	int	dec_nbr;

	dec_nbr = 0;
	n_base = -1;
	while (base[++n_base])
		;
	n_str = -1;
	while (str[++n_str])
		;
	n_str -= 1;
	while (*str)
	{
		dec_nbr += (ft_index(*str, base) * ft_pow(n_base, n_str));
		n_str--;
		str++;
	}
	return ((int)dec_nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	signal;
	int	i;

	if (!ft_checkbase(base))
		return (0);
	signal = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	i = 0;
	while (str[i])
	{
		if (ft_index(str[i], base) == -1)
			return (0);
	}
	return ((signal * ft_aux(str, base)));
}
/*
int	main(int c, char **str)
{
	(void) c;
	printf("input: %s\tbase: %s\noutput: %d\n",
		str[1], str[2], ft_atoi_base(str[1], str[2]));
	return (0);
}
*/
