/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:11:02 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/30 22:21:31 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
typedef struct s_stock_str
{
    int size;
    char    *str;
    char    *copy;
}   t_stock_str;
*/

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

// nbr >= 0
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
	ft_printstr(par->copy);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_printstock(par);
		par++;
	}
}
