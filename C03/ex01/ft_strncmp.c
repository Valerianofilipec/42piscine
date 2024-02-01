/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:59:39 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/23 15:17:39 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int c, char **str)
{
    (void) c;
    printf("ft_strncmp -> %i \n", ft_strncmp(str[1], str[2], atoi(str[3])));
    printf("s1 -> %s\t|\ts2 -> %s\n", str[1], str[2]);
    printf("strcmp -> %i \n", strncmp(str[1], str[2], atoi(str[3])));
}
*/
