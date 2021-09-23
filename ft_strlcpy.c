/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:48:50 by Jev               #+#    #+#             */
/*   Updated: 2021/09/23 01:01:54 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (size - 1 == 0)
	{
		ft_bzero((void *) dst, sizeof(char));
	}
	if (*(char *) dst == '\0' || size == 0)
	{
		return (1);
	}
	*(char *) dst = *(char *) src;
	dst++;
	src++;
	return (ft_strlcpy(dst, src, size - 1));
}
