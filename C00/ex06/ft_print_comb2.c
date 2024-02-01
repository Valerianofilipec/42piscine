/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:45:14 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/15 15:27:25 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb2(short number)
{
	char	c;

	if (number < 10)
	{
		c = number + 48;
		write(1, "0", 1);
		write(1, &c, 1);
		return ;
	}
	c = (number / 10) + 48;
	write(1, &c, 1);
	c = (number % 10) + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	short	n[2];

	n[0] = -1;
	while (++n[0] < 99)
	{
		n[1] = n[0];
		while (++n[1] < 100)
		{
			print_comb2(n[0]);
			write(1, " ", 1);
			print_comb2(n[1]);
			if (n[0] < 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
