/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:53:06 by Jev               #+#    #+#             */
/*   Updated: 2021/09/11 20:55:04 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	if (size <= (size_t) ft_strlen(dst))
	{
		return (1);
	}
	size -= ft_strlen(dst);
	if (size - 1 == 0)
	{
		return (1);
	}
	while (*(char *) dst != '\0')
	{
		dst++;
	}
	*(char *) dst = *(char *) src;
	src++;
	dst++;
	*(char *) dst = '\0';
	return (ft_strlcat(dst, src, size - 1));
}
