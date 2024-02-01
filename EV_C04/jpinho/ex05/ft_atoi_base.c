/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinho-s <jpinho-s@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:32:12 by jpinho-s          #+#    #+#             */
/*   Updated: 2024/01/21 14:32:16 by jpinho-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkerror(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	count = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		negative;
	int		nb;
	int		nb2;
	int		begin_len;

	nb = 0;
	i = 0;
	begin_len = checkerror(base);
	if (begin_len >= 2)
	{
		negative = whitespaces(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * begin_len) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= negative);
	}
	return (0);
}

/*int	ft_atoi_base(char *str, char *base)
{
	int		i; // Variável de controle para índices
	int		negative; // Variável para armazenar o 
	sinal do número (positivo ou negativo)
	int		nb; //  Variável para armazenar o valor 
	convertido para base decimal
	int		nb2; //  Variável temporária para 
	armazenar o valor convertido da base
	int		begin_len; // Variável para armazenar 
	o comprimento da base

	nb = 0; // Inicializa a variável 'nb' com zero
	i = 0; // Inicializa a variável de controle 'i' com zero
	begin_len = checkerror(base); // Obtém o comprimento da base usando 
	a função 'checkerror'
	if (begin_len >= 2) // Verifica se o comprimento da base é pelo 
	menos 2 (minimo porque o minimo e binario
	{
		negative = whitespaces(str, &i); // Chama uma função 
		'whitespaces' para lidar com espaços em branco e obter
		o sinal do número
		nb2 = nb_base(str[i], base); // Chama uma função 
		'nb_base' para obter o valor correspondente do caractere
		na base
		while (nb2 != -1) // Executa um loop enquanto o valor 
		da base convertida não for -1
		{
			nb = (nb * begin_len) + nb2; // Atualiza
			 o valor convertido para a base decimal
			i++; // Move para o próximo caractere na
			string
			nb2 = nb_base(str[i], base); // Obtém o 
			próximo valor correspondente da base
		}
		return (nb *= negative); // Retorna o valor final 
		multiplicado pelo sinal obtido anteriormente
	}
	return (0); // Retorna zero se o comprimento da base não for pelo menos 2
}*/

/*int	main(void)
{
	printf("%d\n", ft_atoi_base("+++++--13125gfhd", "0123456789"));
	printf("%d\n", ft_atoi_base("   ---101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}*/
