/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 22:50:28 by Jev               #+#    #+#             */
/*   Updated: 2021/10/03 00:35:18 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;

	copy = malloc (len);
	if (copy == NULL)
	{
		return (NULL);
	}
	ft_memcpy(copy, s + start, len * sizeof(char));
	return (copy);
}
