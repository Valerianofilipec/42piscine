/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:56:07 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/27 11:58:31 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str);

int	main(int c, char **str)
{
	while (--c > 0)
		ft_printstr(str[c]);
	return (0);
}

void	ft_printstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}
