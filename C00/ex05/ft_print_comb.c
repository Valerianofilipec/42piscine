/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:28:39 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/13 22:42:00 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a + b + c < 168)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	d_1;
	char	d_2;
	char	d_3;

	d_1 = '0' - 1;
	while (++d_1 <= '7')
	{
		d_2 = d_1;
		while (++d_2 <= '8')
		{
			d_3 = d_2;
			while (++d_3 <= '9')
			{
				print_comb(d_1, d_2, d_3);
			}
		}
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
