/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:36:22 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/28 20:56:21 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoidict.h"
#include "dictionary.h"
#include <stdbool.h>
#include <limits.h>

// <atoidict lib> print a "key: value" refered by numbers.dict file 
void	ft_atoi_dict(char *str);

// <atoidic lib> set a key and value to the dictionary
void	ft_set_keyvalue(char *key, char *value);

// check if the str is an acceptable positive(unsigned) long int
bool	ft_is_int(char *nbr);

// check if str is valid value (key:value) to dict
bool	ft_valid_value(char *str);

int	main(int c, char **args)
{
	if (c == 2)
	{
		if (ft_is_int(args[1]))
			ft_atoi_dict(args[1]);
		else
			write(1, "Error\n", 6);
	}
	else if (c == 3)
	{
		if (ft_is_int(args[1]))
		{
			if (ft_valid_value(args[2]))
				ft_dict_set(args[1], args[2]);
			else
				write(1, "Error\n", 6);
		}
	}
	return (0);
}

bool	ft_is_int(char *nbr)
{
	int	digits;

	if (!nbr || !*nbr)
		return (false);
	while ((*nbr >= 9 && *nbr <= 13) || *nbr == 32)
		nbr++;
	digits = 0;
	while (*nbr)
	{
		if (*nbr < '0' && *nbr > '9')
			return (false);
		nbr++;
		digits++;
	}
	if (digits == 0 || digits > 20)
		return (false);
	return (true);
}

bool	ft_valid_value(char *str)
{
	if (!str || !*str)
		return (false);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (!*str)
		return (false);
	return (true);
}
