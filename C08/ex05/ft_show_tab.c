/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:11:02 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/31 13:58:42 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_printstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(int nbr)
{
	if (nbr > 9)
		ft_printnbr(nbr / 10);
	ft_putchar((nbr % 10) + 48);
}

void	ft_printstock(struct s_stock_str *par)
{
	ft_printstr(par->str);
	ft_printnbr(par->size);
	write(1, "\n", 1);
	ft_printstr(par->copy);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_printstock(par);
		par++;
	}
}
