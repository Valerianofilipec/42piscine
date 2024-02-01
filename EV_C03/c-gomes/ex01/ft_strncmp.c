/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgomes-e <cgomes-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:35:32 by cgomes-e          #+#    #+#             */
/*   Updated: 2024/01/29 13:24:37 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0; 
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>
int	main(void)
{
	int r = ft_strncmp("iix", "ii", 2);
	printf("%d\n",r);
}
