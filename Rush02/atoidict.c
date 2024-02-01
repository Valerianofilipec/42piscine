/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoidict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:15:37 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/28 20:25:58 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "dictionary.h"
#include <limits.h>

//<dictionary.h> search a value of key in dictionary.
//return true if found it, otherwise return "Dict Error\n" and false
bool	ft_dict_get(char *key);

//((nbr / 10) * (10**(--power)))
char	*ft_str_pow(char *nbr, int power);

//((nbr % 10) * (10**(--power)))
char	*ft_str_rest(char *nbr, int power);

void	ft_atoi_dist(char *str, int size)
{
	if (size < 1)
		return ;
	if (ft_strlen(str) == size)
		ft_dict_get(str);
	else
	{
		ft_atoi_dict(ft_str_pow(str, size - 1), size - 1);
		ft_atoi_dict(ft_str_rest(str, size -1), size - 1);
	}
}

char	*ft_str_pow(char *nbr, int size)
{
	unsigned long	r;

	r = ft_atoi(nbr);
	r /= 10;
	r *= ft_pow(10, size - 1);
	ft_putnbr(nbr, r);
	return (nbr);
}

char	*ft_str_rest(char *nbr, int size)
{
	unsigned long	r;

	r = ft_atoi(nbr);
	r %= 10;
	r *= ft_pow(10, size - 1);
	ft_putnbr(nbr, r);
	return (nbr);
}
