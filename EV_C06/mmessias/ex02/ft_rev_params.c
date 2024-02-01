/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:26:33 by mmessias          #+#    #+#             */
/*   Updated: 2024/01/28 16:10:30 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	print(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		putchar(av[i]);
		i++;
	}
	putchar('\n');
}

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	if (ac > 1)
	{
		while (i > 0)
		{
			print(av[i]);
			i--;
		}
		return (0);
	}
}
