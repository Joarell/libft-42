/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:20:44 by Jev               #+#    #+#             */
/*   Updated: 2021/10/24 19:57:16 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*found;

	found = (unsigned char *) b;
	if (!len)
	{
		return (NULL);
	}
	while (len--)
	{
		if (*found == (unsigned char ) c)
		{
			return ((void *) found);
		}
		found++;
	}
	return (NULL);
}
