/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:38:16 by Jev               #+#    #+#             */
/*   Updated: 2021/11/05 23:21:33 by Jev              ###   ########.fr       */
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
	return (words);
}

static	char	*move_n(char const *str, char t)
{
	while (*str == t)
	{
		str++;
	}
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
	new = ft_substr(s, 0, range);
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char		**storage;
	size_t		i;
	char		*hold;
	size_t		len;

	i = 0;
	hold = (char *) s;
	len = array_size(s, c);
	storage = (char **)malloc(len * sizeof(char *));
	if (storage == NULL)
		return (NULL);
	while (--len)
	{
		hold = move_n(hold, c);
		storage[i] = next(hold, c);
		hold++;
		i++;
	}
	storage[i] = NULL;
	return (storage);
}
