/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:48:50 by Jev               #+#    #+#             */
/*   Updated: 2021/10/16 18:51:08 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	range(const char *str, size_t l)
{
	size_t	i;

	i = 0;
	while (str[i] && i < l)
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	len;

	if (!dst || !src)
	{
		return (0);
	}
	dstlen = ft_strlen(src);
	if (size)
	{
		len = range(src, size - 1);
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (dstlen);
}
