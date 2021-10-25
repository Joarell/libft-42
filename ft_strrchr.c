/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:28:39 by Jev               #+#    #+#             */
/*   Updated: 2021/10/24 20:43:37 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s);
	str = (char *) s + len;
	while (len--)
	{
		if (*str == (char) c)
		{
			return (str);
		}
		str--;
	}
	if (*str == (char) c)
		return (str);
	return (NULL);
}
