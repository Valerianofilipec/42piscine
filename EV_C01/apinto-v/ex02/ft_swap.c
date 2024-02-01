/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto-v <apinto-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 23:59:43 by apinto-v          #+#    #+#             */
/*   Updated: 2024/01/24 00:22:17 by apinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void ft_swap(int *a, int *b);

int main(void)
{
    int a;
    int b;

    ft_swap(&a, &b);
}*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}