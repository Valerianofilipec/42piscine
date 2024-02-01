/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto-v <apinto-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 00:35:36 by apinto-v          #+#    #+#             */
/*   Updated: 2024/01/29 21:24:53 by apinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a=15;
	int b=3;

	printf("%i, %i\n", a ,b);

	ft_ultimate_div_mod(&a, &b);

	printf("%i, %i\n", a ,b);
} */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
