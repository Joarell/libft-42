/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 22:42:59 by Jev               #+#    #+#             */
/*   Updated: 2021/09/21 22:16:33 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy;
	int		value;

	value = ft_strlen(str);
	copy = malloc(value * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	ft_memmove(copy, str, value);
	return (copy);
}
