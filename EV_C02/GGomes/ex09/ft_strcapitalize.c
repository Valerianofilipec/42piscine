/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggomes-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:52:39 by ggomes-v          #+#    #+#             */
/*   Updated: 2024/01/24 20:10:32 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	diff;

	diff = 32;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] = str[count] + diff;
		count++;
	}
	count = 0;
	while (str[count] != '\0')
	{
		if (count == 0)
		{
			if (str[count] >= 'a' && str[count] <= 'z')
				str[count] = str[count] - diff;
		}
		else if (str[count] == ' ')
		{
			count++;
			if (((str[count] >= 32 && str[count] <= 57) 
					|| (str[count] >= 58 && str[count] <= 64) 
					|| (str[count] >= 91 && str[count] <= 96) 
					|| (str[count] >= 123 && str[count] <= 126)))
			{
				count++;
				if (str[count] >= 'a' && str[count] <= 'z')
				{
					str[count] = str[count] - diff;
				}
			}
			else
			{
				str[count] = str[count] - diff;
			}
		}
		else if ((str[count] >= 32 && str[count] <= 47) 
			|| (str[count] >= 58 && str[count] <= 64) 
			|| (str[count] >= 91 && str[count] <= 96) 
			|| (str[count] >= 123 && str[count] <= 126))
		{
			if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
			{
				count++;
				str[count] = str[count] - diff;
			}
		}
		count++; 
	}
	return (0); 
}

#include <stdio.h>

int	main()
{
	char	str1[70] = "ola, tudo bem? 42Palavras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(str1);
	printf("%s", str1);
	return(0);
}
