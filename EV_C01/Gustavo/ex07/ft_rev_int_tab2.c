/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutinani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:48:55 by gutinani          #+#    #+#             */
/*   Updated: 2024/01/18 11:49:46 by gutinani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	index = 0;
	while (i < size)
	{
		swap = tab[index];
		tab[index] = tab[size - 1];
		tab[size - 1] = swap;
		index++;
		size--;
	}
}
