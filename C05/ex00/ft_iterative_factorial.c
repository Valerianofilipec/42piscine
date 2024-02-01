/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:30:19 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/27 12:37:33 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	if (nb < 0)
		return (0);
	f = 1;
	while (nb > 0)
		f *= nb--;
	return (f);
}
