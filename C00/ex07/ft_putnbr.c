/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:07:31 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/22 19:53:48 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	long_nb;
	char	digit[10];
	short	i;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	long_nb = nb;
	if (nb < 0)
	{
		long_nb *= -1;
		write(1, "-", 1);
	}
	i = 0;
	while (long_nb % 10)
	{
		digit[i++] = (long_nb % 10) + 48;
		long_nb /= 10;
	}
	while (i > 0)
		write(1, &digit[--i], 1);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
