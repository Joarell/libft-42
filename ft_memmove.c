/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:53:16 by Jev               #+#    #+#             */
/*   Updated: 2021/10/05 22:45:47 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	zero;
	int		i;

	zero = len;
	i = 0;
	while (len > 0)
	{
		*(char *) dst = *(char *) src;
		dst++;
		src++;
		len--;
	}
	dst -= zero;
	return (dst);
}
