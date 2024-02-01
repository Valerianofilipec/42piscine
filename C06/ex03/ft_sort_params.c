/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:56:17 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/27 12:21:56 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str);

void	ft_printargv(char **argv);

void	ft_sort(int n, char *argv[]);

int		ft_strcmp(char *s1, char *s2);

int	main(int c, char **argv)
{
	if (c > 1)
	{
		ft_sort(c - 1, argv + 1);
		ft_printargv(argv + 1);
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_printstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_printargv(char **argv)
{
	while (*argv)
	{
		ft_printstr(*argv++);
		write(1, "\n", 1);
	}
}

void	ft_sort(int n, char *argv[])
{
	char	*temp;
	int		i;
	int		j;

	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < n - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
		}
	}
}
