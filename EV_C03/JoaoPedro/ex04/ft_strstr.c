/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-se <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:30:28 by jdias-se          #+#    #+#             */
/*   Updated: 2024/01/23 12:54:11 by jdias-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_while(char *str, char *to_find, int i, int a)
{
	int	flag;

	flag = 0;
	while (str[i] != 0)
	{
		if (str[i] == to_find[a] && flag == 0 && to_find[a])
		{
			flag = 1;
			a++;
		}
		else if (flag == 1 && to_find[a] != 0)
			a++;
		else if (flag == 1 && to_find[a] == 0)
			break ;
		else
		{
			flag = 0;
			a = 0;
		}
		i++;
	}
	return (&str[i - a]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (to_find [a] == 0)
		return (str);
	else
		return (ft_while(str, to_find, i, a));
}

/*int	main(void)
{
	char	str[] = "Vou passear a minha foca";
	char	find[] = "pass";
	char	*c;

	c = ft_strstr(str, find);
	while (*c)
		write(1, c++, 1);
}*/
