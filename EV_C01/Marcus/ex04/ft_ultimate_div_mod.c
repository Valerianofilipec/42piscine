/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:01:16 by marcde-s          #+#    #+#             */
/*   Updated: 2024/01/20 16:45:59 by marcde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	res;

	div = *a / *b;
	res = *a % *b;
	*a = div;
	*b = res;
}

/*int main ()
{
	int nu1;
	int nu2;
	nu1 = 10;
	nu2 = 3;
	ft_ultimate_div_mod(&nu1, &nu2);
	printf ("1-%d, 2-%d", nu1, nu2);
}*/
