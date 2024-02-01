/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:59:17 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/29 17:41:50 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	if (!(*base) || !(*(base + 1)))
		return (0);
	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (base[++j])
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	return (i);
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

char	*ft_putnbr_base(int nbr, char *base, char *dest)
{
	char	rest[100];
	int		i;
	int		nbase;
	int		signal;

	nbase = ft_checkbase(base);
	signal = 1;
	if (nbr < 0)
		signal = -1;
	nbr *= signal;
	i = 0;
	while (nbr >= nbase)
	{
		rest[i++] = base[nbr % nbase];
		nbr /= nbase;
	}
	rest[i] = base[nbr];
	nbase = -1;
	if (signal == -1)
		dest[++nbase] = '-';
	while (i >= 0)
		dest[++nbase] = rest[i--];
	dest[++nbase] = 0;
	return (dest);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	r;
	int	nbr_i;
	int	nbase;

	r = 0;
	i = 0;
	nbase = ft_checkbase(base);
	if (nbase < 2)
		return (0);
	nbr_i = ft_index(str[i], base);
	while (nbr_i != -1)
	{
		r = (r * nbase) + nbr_i;
		i++;
		nbr_i = ft_index(str[i], base);
	}
	return (r);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*x;
	int		signal;
	int		i;

	signal = 1;
	while ((*nbr >= 9 && *nbr <= 13) || *nbr == 32)
		nbr++;
	if (!ft_checkbase(base_from) && !ft_checkbase(base_to))
		return (NULL);
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			signal *= -1;
		nbr++;
	}
	x = (char *) malloc(32 + 2);
	x = ft_putnbr_base((signal * ft_atoi_base(nbr, base_from)), base_to, x);
	i = -1;
	while (x[++i])
		;
	free(&x[++i]);
	return (x);
}
