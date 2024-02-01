/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:38:39 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/17 15:56:34 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	j = size - 1;
	while (j > 0)
	{
		i = 0;
		while (i < j)
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		j--;
	}
}
/*
void main(){
    int tab[] = {5,2,4,1,3};
    int size = sizeof(tab)/sizeof(tab[0]);
    ft_sort_int_tab(tab, size);
}
*/
