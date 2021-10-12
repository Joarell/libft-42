/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:15:50 by Jev               #+#    #+#             */
/*   Updated: 2021/10/12 20:28:11 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*start_trim(const char *str, const char *cut)
{
	char	*aux;
	int		len;

	len = ft_strlen(str) - ft_strlen(cut);
	aux = malloc (len * sizeof(char));
	if (aux == NULL)
		return (NULL);
	len = 0;
	while (*str != '\0')
	{
		if (*str == *cut)
		{
			cut++;
			str++;
		}
		if (*str != *cut)
		{
			aux[len] = *str;
			str++;
			len++;
		}
	}
	return (aux);
}

static	void	*end_trim(const char *str, const char *cut)
{
	char	*aux2;
	int		len;

	len = ft_strlen(str) - ft_strlen(cut);
	aux2 = malloc(len * sizeof(char));
	if (aux2 == NULL)
		return (NULL);
	cut += ft_strlen(cut);
	str += ft_strlen(str);
	while (len > 0)
	{
		if (*str == *cut)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	if (*set == 0)
	{
		return ((char *)s1);
	}
	s1 = start_trim(s1, set);
	if (ft_strrchr(s1, *set) != NULL)
	{
		s1 = end_trim (s1, set);
	}
	return ((char *) s1);
}
