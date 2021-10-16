/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:53:06 by Jev               #+#    #+#             */
/*   Updated: 2021/10/16 18:49:46 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cat_len(const char *str, size_t num)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && i < num)
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{	
	size_t	d_len;
	size_t	s_len;

	d_len = cat_len(dst, size);
	s_len = ft_strlen(src);
	if (d_len == s_len)
	{
		return (d_len + s_len);
	}
	ft_strlcpy(&dst[d_len], src, size - d_len);
	return (d_len + s_len);
}
