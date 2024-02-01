/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinho-s <jpinho-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:31:23 by jpinho-s          #+#    #+#             */
/*   Updated: 2024/01/24 13:38:52 by jpinho-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkerror(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_param(int nbr, char *base, int len)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_param(nbr / len, base, len);
		ft_putnbr_param(-(nbr % len), base, len);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= len)
	{
		ft_putnbr_param(nbr / len, base, len);
		ft_putnbr_param(nbr % len, base, len);
	}
	if (nbr < len)
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	error;

	error = checkerror(base);
	len = ft_strlen(base);
	if (error == 1)
	{
		ft_putnbr_param(nbr, base, len);
	}
}

/*int	main(void)
{
//	ft_putnbr_base(-12, "01");
//	printf("\n");
//	ft_putnbr_base(40, "poneyvif");
//	printf("\n");
//	ft_putnbr_base(894867, "0123456789");
//	printf("\n");
//	ft_putnbr_base(53, "0123456789abcdef");
//	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789");
}
*/
