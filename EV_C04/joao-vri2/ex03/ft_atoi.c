/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-vri <joao-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:09:19 by joao-vri          #+#    #+#             */
/*   Updated: 2024/01/25 19:52:13 by joao-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	sinal;

	num = 0;
	sinal = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str [i] == '-')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * sinal);
}

/*int	main(void)
{
	char	num[] = "---+--+12345ab56";

	printf ("%i", ft_atoi(num));
}*/
