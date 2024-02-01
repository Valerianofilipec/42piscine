/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:51:43 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/01 13:29:35 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dup;
	int		i;

	i = 0;
	dup = NULL;
	dup = malloc (sizeof(char) * ft_strlen(str) + 1);
	if (!dup)
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tabs;
	int					i;

	i = 0;
	tabs = malloc(sizeof(struct s_stock_str) * ac + 1);
	if (tabs == NULL)
		return (NULL);
	while (i <= ac - 1)
	{
		tabs[i].size = ft_strlen(av[i]);
		tabs[i].str = av[i];
		tabs[i].copy = ft_strdup(av[i]);
		i++;
	}
	tabs[i].size = 0;
	tabs[i].str = 0;
	tabs[i].copy = 0;
	return (tabs);
}
/*
#include "ft_show_tab.c"
int	main(void)
{
	int i = 0;
	int ac = 3;
	char *go[] = {"Just","Work","pls"};
	struct s_stock_str  *test =  ft_strs_to_tab(ac, go);

	ft_show_tab(test);
	
	while(i < 3 )
	{
		printf("%d ", test[i].size);
		printf("%s ", test[i].str);
		printf("%s ", test[i].copy);
		printf("\n");
		i++;
	}
	
	free (test);
	return (0);
}
*/
