/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:39:23 by Jev               #+#    #+#             */
/*   Updated: 2021/09/13 23:56:52 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	if (len == 0)
	{
		return (0);
	}
	else if ((char) len < 0)
	{
		return (ft_strncmp(b1, b2, len));
	}
	while (*(char *) b1 == *(char *) b2 && len > 1)
	{
		b1++;
		b2++;
		len--;
	}
	if (*(char *) b1 > *(char *) b2)
	{
		return (1);
	}
	else if (*(char *) b1 < *(char *) b2)
	{
		return (-1);
	}
	return (0);
}
