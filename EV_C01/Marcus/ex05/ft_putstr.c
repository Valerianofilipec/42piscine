/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:11:11 by marcde-s          #+#    #+#             */
/*   Updated: 2024/01/18 15:14:17 by marcde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str ++;
	}
}
/*int main(void)
{
	char string[] = "bem vindo";

	ft_putstr(string);

	return (0);
}*/
