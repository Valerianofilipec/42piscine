/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:59:02 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/27 17:04:44 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	c;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	c = 1;
	while (++c < nb)
	{
		if (!(nb % c))
			return (0);
	}
	return (1);
}