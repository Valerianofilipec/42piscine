/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:55:53 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/27 11:55:56 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str);

int	main(int c, char **str)
{
	int	i;

	i = 0;
	while (++i < c)
		ft_printstr(str[i]);
	return (0);
}

void	ft_printstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}
