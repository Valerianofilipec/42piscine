/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgomes-e <cgomes-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:00:04 by cgomes-e          #+#    #+#             */
/*   Updated: 2024/01/28 10:46:35 by cgomes-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	str[] = "World";
//	char	dest[] = "Hello";
//	char	*ptr1;
//	char	*ptr2;
//
//	ptr1 = &dest[0];
//	ptr2 = &str[0];
//	ft_strcat(ptr1, ptr2);
//}
