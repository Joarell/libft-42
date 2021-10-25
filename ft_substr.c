/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 22:50:28 by Jev               #+#    #+#             */
/*   Updated: 2021/10/24 22:11:31 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	range;

	range = ft_strlen(s);
	if (range < start)
	{
		return (ft_strdup(""));
	}
	s += start;
	range = ft_strlen(s);
	if (range > len)
	{
		copy = (char *) malloc (len * sizeof(char) + 1);
		if (copy == NULL)
			return (NULL);
		ft_strlcpy(copy, s, len + 1);
		return (copy);
	}
	copy = (char *) malloc (range * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, s, len + 1);
	return (copy);
}
