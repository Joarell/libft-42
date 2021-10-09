/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:53:06 by Jev               #+#    #+#             */
/*   Updated: 2021/10/09 13:21:25 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{	
	if ((size <= (size_t) ft_strlen(dst)) || (size - 1 == 0))
	{
		return (*dst);
	}
	if (!dst || !src)
	{
		return (*dst);
	}
	size -= ft_strlen(dst);
	while (*dst != '\0')
	{
		dst++;
	}
	ft_memcpy(dst, src, size - 1);
	return (*dst);
}
