/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:42:31 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/20 22:43:01 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//print string
void	ft_print_hex(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	short	i;

	i = -1;
	while (str[++i] != 0)
	{
		if (str[i] < 32 && str[i] < 127)
		{
			write(1, "\\", 1);
			ft_print_hex("0123456789abcdef"[str[i] / 16]);
			ft_print_hex("0123456789abcdef"[str[i] % 16]);
		}
		else
			write(1, &str[i], 1);
	}
}
/*
void main(){
    char texto[] = "Ola\nesta bem?";
    ft_putstr_non_printable(texto);
}
*/
