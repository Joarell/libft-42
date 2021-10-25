/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 00:39:24 by Jev               #+#    #+#             */
/*   Updated: 2021/10/24 20:01:14 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *) s;
	if (*str == '\0' && (char) c != '\0')
	{
		return (NULL);
	}
	if (*str != (char) c)
	{
		str++;
		return (ft_strchr(str, (char) c));
	}
	return (str);
}
