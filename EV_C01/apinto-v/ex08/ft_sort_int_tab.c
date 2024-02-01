/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto-v <apinto-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:27:15 by apinto-v          #+#    #+#             */
/*   Updated: 2024/01/29 21:22:05 by apinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int lista[9] = {7,12,5,18,2,15,9,3,19};
    ft_sort_int_tab(lista, 9);
}
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}
