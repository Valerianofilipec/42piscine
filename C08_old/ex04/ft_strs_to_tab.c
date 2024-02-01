/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:18:26 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/30 22:17:59 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include "stock_str.h"

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strdup(char *src, int size)
{
	char	*str;
	int		i;

	str = (char *) malloc(size + 1);
	if (str == NULL)
		return (str);
	i = -1;
	while (src[++i])
		str[i] = src[i];
	str[i] = 0;
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*strs;
	int					i;

	strs = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (strs == NULL)
		return (strs);
	i = -1;
	while (++i < ac)
	{
		strs[i].size = ft_strlen(av[i]);
		strs[i].str = av[i];
		strs[i].copy = ft_strdup(av[i], strs[i].size);
		if (strs[i].copy == NULL)
			return (NULL);
	}
	strs[i].str = 0;
	strs[i].copy = 0;
	return (strs);
}
/*
int	main(int c, char **argv)
{
	struct s_stock_str	*strs;

	strs = ft_strs_to_tab(c, argv);
	return (0);
}
*/
