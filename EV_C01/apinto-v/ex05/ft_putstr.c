/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto-v <apinto-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 00:38:14 by apinto-v          #+#    #+#             */
/*   Updated: 2024/01/29 21:23:31 by apinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	tam;

	tam = 0;
	while (str[tam] != '\0')
	{
		tam++;
	}
	return (tam);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (i < ft_strlen(str))
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char * word = "Amadeu";
	ft_putstr(word);
}*/
