/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:53:16 by Jev               #+#    #+#             */
/*   Updated: 2021/10/13 19:39:56 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((!dst && !src) || !len)
		return (dst);
	if (dst <= src)
	{
		return (ft_memcpy(dst, src, len));
	}
	while (len--)
	{
		*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	}
	return (dst);
}
