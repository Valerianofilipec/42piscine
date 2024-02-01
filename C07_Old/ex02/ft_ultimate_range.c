/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:57:18 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/29 13:00:34 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	n;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	n = max - min;
	arr = (int *) malloc(n * 4);
	if (!arr)
		return (-1);
	i = -1;
	while (min < max)
		arr[++i] = min++;
	*range = arr;
	return (n);
}
