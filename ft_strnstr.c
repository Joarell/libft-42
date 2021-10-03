/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:12:54 by Jev               #+#    #+#             */
/*   Updated: 2021/09/25 19:18:07 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*aux;

	while (*big != *little)
	{
		if (len <= 0)
			return (NULL);
		big++;
		len--;
	}
	aux = (char *) big;
	while (*little != '\0')
	{
		if (len <= 0)
			return (NULL);
		big++;
		little++;
		len--;
	}
	return (aux);
}
