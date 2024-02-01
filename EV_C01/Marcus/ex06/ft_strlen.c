/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:41:16 by marcde-s          #+#    #+#             */
/*   Updated: 2024/01/20 16:42:23 by marcde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}
/*int	main(void)
{
	char	string[15] = "hello ";
	int m;
	m = ft_strlen(string) +'0';
	write (1, &m, 1);
	return (0);
}*/
