/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:11:07 by Jev               #+#    #+#             */
/*   Updated: 2021/10/13 12:18:52 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	zero;

	zero = n;
	if ((!dst && !src) || !n)
	{
		return (dst);
	}
	while (n > 0)
	{
		*(char *) dst = *(char *) src;
		dst++;
		src++;
		n--;
	}
	dst -= zero;
	return (dst);
}
