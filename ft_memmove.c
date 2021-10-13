/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:53:16 by Jev               #+#    #+#             */
/*   Updated: 2021/10/13 13:24:47 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	zero;
	int		i;

	zero = len;
	i = 0;
	if ((!dst && !src) || !len)
		return (dst);
	if (dst <= src)
	{
		return (ft_memcpy(dst, src, len));
	}
	else
	{
		dst = (unsigned char *)dst + len - 1;
		src = (unsigned char *)dst + len - 1;
		while (len > 0)
		{
			*(unsigned char *) dst = *(unsigned char *) src;
			dst--;
			src--;
			len--;
		}
	}
	return (dst);
}
