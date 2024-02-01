/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:33:46 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/20 22:11:38 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE	1
#define FALSE	0

typedef short	t_bool;

t_bool	ft_is_word(char c)
{
	t_bool	r;

	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		r = TRUE;
	else
		r = FALSE;
	return ((c > 47 && c < 58) || r); 
}

void	ft_upcase(char *c)
{
	if (*c > 96 && *c < 123)
		*c -= 32;
}

void	ft_lowercase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

char	*ft_strcapitalize(char *str)
{
	t_bool	cap;
	int		i;

	cap = TRUE;
	i = -1;
	while (str[++i] != 0)
	{
		if (cap && ft_is_word(str[i]))
		{
			ft_upcase(&str[i]);
			cap = FALSE;
		}
		else
		{
			if (!ft_is_word(str[i]))
				cap = TRUE;
			else
				ft_lowercase(&str[i]);
		}
	}
	return (str);
}
/*
#include <stdio.h>
int	main(int c, char **str)
{
	char	*r;

	(void) c;
	r = ft_strcapitalize(str[1]);
	printf("%s\n", r);
	return (0);
}
*/
