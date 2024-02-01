/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:54:16 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/23 14:57:17 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] && s2[i] && s1[i] == s2[i])
		;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(int c, char **str)
{
    printf("ft_strcmp -> %i \n", ft_strcmp(str[1], str[2]));
    printf("s1 -> %s\t|\ts2 -> %s\n", str[1], str[2]);
    printf("strcmp -> %i \n", strcmp(str[1], str[2]));
}
*/
