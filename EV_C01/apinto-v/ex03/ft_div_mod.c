/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinto-v <apinto-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 00:23:32 by apinto-v          #+#    #+#             */
/*   Updated: 2024/01/24 00:27:33 by apinto-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a;
    int b;
    int div;
    int mod;
    ft_div_mod(a, b, &div, &mod);
}*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
