/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:28:39 by Jev               #+#    #+#             */
/*   Updated: 2021/10/16 20:11:39 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (s[0] == c)
	{
		return ((char *) s);
	}
	if (!*s)
	{
		return ((char *) s);
	}
	s += len;
	while (len--)
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s--;
	}
	return (NULL);
}
