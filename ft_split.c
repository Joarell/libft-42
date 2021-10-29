/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:38:16 by Jev               #+#    #+#             */
/*   Updated: 2021/10/29 09:55:44 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	array_size(char const *str, char c)
{
	size_t	words;
	int		i;
	int		trash;

	words = 0;
	trash = 0;
	i = 0;
	if (!*str)
	{
		return (words = 1);
	}
	while (str[i] != '\0')
	{
		if (str[i] == c && trash == 0)
		{
			words++;
			trash++;
		}
		if (str[i] != c)
			trash = 0;
		i++;
	}
	words++;
	return (words + 1);
}

static	char	*next(char const *s, char c)
{
	int		range;
	char	*next;

	range = 0;
	while (s[range] != c && s[range] != '\0')
	{
		range++;
	}
	next = ft_substr(s, 0, range);
	return (next);
}

char	**ft_split(char const *s, char c)
{
	char		**storage;
	size_t		i;
	char const	*hold;

	i = 0;
	hold = (char *) s;
	s = ft_strtrim(s, &c);
	storage = (char **)malloc (array_size(s, c) * sizeof(char *));
	if (storage == NULL)
		return (NULL);
	while (*s != '\0')
	{
		s = ft_strtrim(s, &c);
		storage[i] = next(s, c);
		s += ft_strlen(storage[i]);
		i++;
	}
	s = hold;
	storage[i] = NULL;
	return (storage);
}
