/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:15:50 by Jev               #+#    #+#             */
/*   Updated: 2021/10/13 02:55:32 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*end_trim(const char *str, const char *cut)
{
	char	*aux2;
	int		len;

	len = ft_strlen(str) - ft_strlen(cut);
	aux2 = malloc(len * sizeof(char));
	if (aux2 == NULL)
		return (NULL);
	str += ft_strlen(str);
	cut += ft_strlen(cut);
	while (len > 0)
	{
		if (*str == *cut && ft_isalpha(str[len - 1]) == 0)
		{
			str--;
			cut--;
		}
		if (*str != *cut)
		{
			aux2[len - 1] = *str;
			str--;
			len--;
		}
	}
	return (aux2);
}

static	char	*middle_trim(const char *str, char *cut)
{
	int		len1;
	int		len2;

	len1 = ft_strlen(str);
	str += len1 - 1;
	len2 = ft_strlen(cut);
	cut += len2 - 1;
	if (*str == *cut)
	{
		str -= len1 - 1;
		cut -= len2 - 1;
		str = end_trim(str, cut);
		return ((char *) str);
	}
	str -= len1 - 1;
	return ((char *) str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len1;
	char	*tmp;

	len1 = ft_strlen(s1);
	tmp = (char *) set;
	while (ft_isalpha(*s1) == 0 && *set != '\0')
	{
		if (*s1 == *set)
		{
			set++;
			s1++;
		}
	}
	s1 = middle_trim(s1, tmp);
	return ((char *) s1);
}
