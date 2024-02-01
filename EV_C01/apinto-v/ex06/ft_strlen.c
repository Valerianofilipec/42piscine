/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto-v <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:12:37 by apinto-v          #+#    #+#             */
/*   Updated: 2024/01/24 01:15:12 by apinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *word = "Amadeu Varandas";
    printf("O tamanho da palavra é: %i\n", ft_strlen(word));

    
}*/

int	ft_strlen(char *str)
{
	int	tam;

	tam = 0;
	while (str[tam] != '\0')
	{
		tam++;
	}
	return (tam);
}
