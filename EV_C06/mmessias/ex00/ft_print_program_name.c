/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:29:45 by mmessias          #+#    #+#             */
/*   Updated: 2024/01/29 23:05:11 by vcalolog         ###   ########.fr       */
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

	i = 0;ZZ
	while (av[0][i] != '\0' && ac)
	{
		put_char(av[0][i]);
		i++;
	}
	put_char ('\n');
	return (0);
}
