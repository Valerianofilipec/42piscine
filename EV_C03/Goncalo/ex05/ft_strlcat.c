/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:23:55 by gomoreir          #+#    #+#             */
/*   Updated: 2024/01/23 13:46:48 by gomoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < size && dest[i])
	{
		i++;
	}
	while ((i + j + 1) < size && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != size)
	{
		dest[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}

/*void	main(void)
{
	char	dest[] = "ola";
	char	src[] = "tudo bem?";
	
	ft_strlcat(dest, src, 5);
}*/
