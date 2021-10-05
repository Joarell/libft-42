/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:39:23 by Jev               #+#    #+#             */
/*   Updated: 2021/10/04 22:11:22 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	if (len == 0)
	{
		return (0);
	}
	else if ((int) len < 0)
	{
		return (ft_strncmp(b1, b2, len));
	}
	while (*(unsigned char *) b1 == *(unsigned char *) b2 && len > 1)
	{
		b1++;
		b2++;
		len--;
	}
	if (*(unsigned char *) b1 > *(unsigned char *) b2)
	{
		return (1);
	}
	else if (*(unsigned char *) b1 < *(unsigned char *) b2)
	{
		return (-1);
	}
	return (0);
}
