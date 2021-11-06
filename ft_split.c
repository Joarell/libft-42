/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:38:16 by Jev               #+#    #+#             */
/*   Updated: 2021/11/06 17:42:19 by Jev              ###   ########.fr       */
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
	if (!str || !*str)
		return (words + 1);
	if (ft_strchr(str, c) == NULL || !c)
		return (words + 2);
	while (str[i])
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
	return (words);
}

static	char	*move_n(char const *str, char t)
{
	int	i;

	i = 0;
	if (!*str && t == 0)
		return (NULL);
	while (str[i] == t)
	{
		i++;
	}
	str += i;
	return ((char *) str);
}

static	char	*next(char const *s, char c)
{
	int		range;
	char	*new;

	range = 0;
	new = NULL;
	while (s[range] != c && s[range] != '\0')
	{
		range++;
	}
	if (range > 0)
		new = ft_substr(s, 0, range);
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char		**storage;
	size_t		i;
	size_t		len;

	i = 0;
	s = move_n(s, c);
	len = array_size(s, c);
	storage = (char **)malloc(len * sizeof(char *));
	if (storage == NULL)
		return (NULL);
	while (--len)
	{
		s = move_n(s, c);
		storage[i] = next(s, c);
		s += ft_strlen(storage[i]);
		i++;
	}
	storage[i] = NULL;
	return (storage);
}
