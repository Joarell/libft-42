/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:12:54 by Jev               #+#    #+#             */
/*   Updated: 2021/10/24 21:50:26 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	range;

	range = ft_strlen(little);
	if (!*little)
		return ((char *) big);
	while (*big && range <= len)
	{
		if (!ft_strncmp(big, little, range))
		{
			return ((char *) big);
		}
		big++;
		len--;
	}
	return (NULL);
}
