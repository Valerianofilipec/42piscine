/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:02:22 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/01 16:40:19 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	handle_negative(long *long_nbr)
{
	if (*long_nbr < 0)
	{
		*long_nbr = -*long_nbr;
		ft_putchar('-');
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size_base;
	int		nbr_final[100];
	int		i;
	long	long_nbr;

	i = 0;
	size_base = 0;
	long_nbr = nbr;
	if (check_base(base))
	{
		handle_negative(&long_nbr);
		if (long_nbr == 0)
			ft_putchar(base[0]);
		while (base[size_base])
			size_base++;
		while (long_nbr)
		{
			nbr_final[i++] = long_nbr % size_base;
			long_nbr = long_nbr / size_base;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
}

#include <stdlib.h>
int	main(int argc, char **argv)
{
	ft_putnbr_base(atoi(argv[1]), argv[2]);
}

