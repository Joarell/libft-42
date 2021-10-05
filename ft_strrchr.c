/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:28:39 by Jev               #+#    #+#             */
/*   Updated: 2021/10/05 19:51:47 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (*(char *) s != '\0')
	{
		s++;
	}
	while (*(char *) s != '\0' - 1 && len >= 0)
	{
		if (*(char *) s == c)
		{
			return ((char *) s);
		}
		s--;
		len--;
	}
	return (NULL);
}
