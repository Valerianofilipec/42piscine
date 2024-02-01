/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:49:55 by gomoreir          #+#    #+#             */
/*   Updated: 2024/01/24 19:37:35 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
#include <string.h>
#include<stdlib.h>
#include<stdio.h>
int	main(int c, char **str)
{
	(void) c;
	int r = ft_strncmp(str[1],str[2],(unsigned int)atoi(str[3]));
	printf("%d\t %d\n", r, strncmp(str[1],str[2],(unsigned int)atoi(str[3])));
	return 0;
}
