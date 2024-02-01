/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:22:27 by mmessias          #+#    #+#             */
/*   Updated: 2024/01/29 00:21:39 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*c;

	c = *s1;
	*s1 = *s2;
	*s2 = c;
}

void	ft_print(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		write(1, &s1[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	if (argc > 1)
	{
		while (argv[j + 1])
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
				j = 0;
			}
			j++;
		}
	}
	j = 1;
	while (j < argc)
	{
		ft_print(argv[j]);
		write(1, "\n", 1);
		j++;
	}
}
