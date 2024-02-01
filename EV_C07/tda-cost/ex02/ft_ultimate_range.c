/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:54:20 by tda-cost          #+#    #+#             */
/*   Updated: 2024/01/29 14:37:13 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*range_pnt;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	range_pnt = (int *) malloc (len * sizeof (int));
	if (!range_pnt)
	{
		*range = 0;
		return (-1);
	}
	*range = range_pnt;
	i = 0;
	while (i < len)
	{
		range_pnt[i] = min + i;
		i++;
	}
	return (len);
}
/*
int	main(void)
{
	int	max;
	int	min;
	int	*d;
	int	i;
	int	size;

	min = 10;
	max = 20;
	i = 0;
	size = ft_ultimate_range(&d, min, max);
	while (i < size)
	{
		printf("%d ", d[i]);
		i++;
	}
	free(d);
}
*/
