/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:12:54 by Jev               #+#    #+#             */
/*   Updated: 2021/10/17 16:12:10 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*aux;

	if (!*little)
	{
		return ((char *) big);
	}
	while (*big != *little)
	{
		if (len == 0 || !*big)
			return (NULL);
		big++;
		len--;
	}
	aux = (char *) big;
	while (*little != '\0')
	{
		if (len == 0 || *big != *little)
		{
			return (NULL);
		}
		big++;
		little++;
		len--;
	}
	return (aux);
}
