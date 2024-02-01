/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:26:20 by mmessias          #+#    #+#             */
/*   Updated: 2024/01/30 00:29:43 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	l;

	i = 0;
	l = 1;
	if (ac >= 2)
	{
		while (--ac > 0)
		{
			while (av[l][i])
			{
				put_char(av[l][i]);
				i++;
			}
			put_char ('\n');
			l++;
			i = 0;
		}
		return (0);
	}
	return (1);
}
