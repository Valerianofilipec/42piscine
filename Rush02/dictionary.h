/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcalolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:06:42 by vcalolog          #+#    #+#             */
/*   Updated: 2024/01/28 20:52:50 by vcalolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
# define DICTIONARY_H

// Struct definition for a key-value pair
typedef struct t_keyvalue
{
	char	*key;
	char	*value;
}	t_keyvalue;
// Function prototypes
char	*ft_dict_get(char *key);

void	ft_dict_set(char *key, char *value);

#endif
