/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:21:13 by apinto-v          #+#    #+#             */
/*   Updated: 2024/01/24 01:23:16 by apinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);
void mostrar(int *lista);

int main(void)
{
    int lista[9] = {1,7,5,6,0,3,4,2,8};
    ft_rev_int_tab(lista, 9);
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab [i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = tmp;
		i++;
	}
}
