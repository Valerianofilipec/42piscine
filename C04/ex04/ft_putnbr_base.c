/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:37:10 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/25 14:37:41 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

/*
 * base 10(decimal) -> "0123456789"
 * base 2(binaria) -> "01"
 * base 16(hexadecimal) -> "0123456789ABCDEF"
 * base 8(octal) -> "poneyvif"
 * 
*/ 

bool	ft_checkbase(char *base)
{
	int	i;

	if (!*base || !(*(base + 1)))
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

int	ft_strlen(char *str)
{
	int	c;

	c = -1;
	while (str[++c])
		;
	return (c);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	long_nbr;
	char	rest[100];
	int		i;
	int		nbase;
	int		signal;

	if (!ft_checkbase(base))
		return ;
	nbase = ft_strlen(base);
	signal = 1;
	long_nbr = (long) nbr;
	if (nbr < 0)
		signal = -1;
	long_nbr *= signal;
	i = 0;
	while (long_nbr >= nbase)
	{
		rest[i++] = base[long_nbr % nbase];
		long_nbr /= nbase;
	}
	rest[i] = base[long_nbr];
	if (signal == -1)
		write(1, "-", 1);
	while (i >= 0)
		write(1, &rest[i--], 1);
}
/*
int main(int c, char **str)
{
    (void) c;
    printf("decimal number: %s\nbase: %s\n \t", str[1], str[2]);
    ft_putnbr_base(atoi(str[1]), str[2]);
}
*/
