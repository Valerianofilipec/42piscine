/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:23:54 by gomoreir          #+#    #+#             */
/*   Updated: 2024/01/24 19:56:42 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	j = 0;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (!to_find[j + 1])
			{
				return (str);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*void	main(void)
{
	char	str[] = "NeedleXdleOnNeedleFind";
	char	find[] = "Needle";

	ft_strstr(str, find);
}*/
