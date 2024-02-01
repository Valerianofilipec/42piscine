/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:43:32 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/21 12:11:50 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

/*  #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("Hello","HEllo", 1));
	printf("%d\n", ft_strncmp("Hello","Heblo", 2));
	printf("%d\n", ft_strncmp("Hello","Hello", 3));
	return 0;
} */