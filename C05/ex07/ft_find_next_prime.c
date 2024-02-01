/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:07:12 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/27 17:13:06 by vcalolog         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	while (nb > 2)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
