/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:20:44 by Jev               #+#    #+#             */
/*   Updated: 2021/10/17 17:04:54 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	if (!len)
	{
		return (NULL);
	}
	while (len--)
	{
		if (*(char *) b == c)
		{
			return ((unsigned char *) b);
		}
		b++;
	}
	return (NULL);
}
