/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:38:39 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/17 15:17:36 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	if (size < 2)
		return ;
	i = 0;
	j = size - 1;
	while (i < j)
	{
		ft_swap(&tab[i++], &tab[j--]);
	}
}
/*
void    main()
{
        int tab[] = {2,1};
        int size = sizeof(tab) / sizeof(tab[0]);
        ft_rev_int_tab(tab, size);
}
*/
