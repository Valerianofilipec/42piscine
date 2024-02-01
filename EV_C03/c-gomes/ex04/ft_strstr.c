/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgomes-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:56:21 by cgomes-e          #+#    #+#             */
/*   Updated: 2024/01/29 13:37:57 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && str[i] != '\0')
		{
			if (to_find [i + 1] == '\0')
			{
				return (str);
			}
			i++;
		}
		str++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "HelloWoraaaaldWorld!";
	char	to_find[] = "World";
	char	*ptr1;
	char	*ptr2;

	ptr1 = &to_find[0];
	ptr2 = &str[0];
	printf("%s", ft_strstr(ptr2, ptr1));
}
