/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:13:13 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/29 12:41:41 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*array;

	if (min >= max)
		return (0);
	len = max - min;
	array = (int *) malloc (len * sizeof (int));
	i = 0;
	while (i < len)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*d;
	int	i;
	int	size;
	
	min = 10;
	max = 20;
	i = 0;
	size = max - min;
	d = ft_range(min, max);
	while (i < size)
	{
		printf("%d ", d[i]);
		i++;
	}
	free(d);
}
*/
