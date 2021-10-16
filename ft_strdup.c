/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 22:42:59 by Jev               #+#    #+#             */
/*   Updated: 2021/10/13 20:36:25 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char		*copy;
	size_t		value;

	value = ft_strlen(str) + 1;
	copy = (char *) malloc(value * sizeof(char));
	if (copy == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(copy, str, value);
	return (copy);
}
