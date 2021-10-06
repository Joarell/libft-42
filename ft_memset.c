/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 02:44:53 by Jev               #+#    #+#             */
/*   Updated: 2021/10/05 22:49:42 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t	zero;

	zero = len;
	while ((int) len > 0)
	{
		*(char *) dest = (char) c;
		dest++;
		len--;
	}
	dest -= zero;
	return (dest);
}
