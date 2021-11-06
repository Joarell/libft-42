/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:38:16 by Jev               #+#    #+#             */
/*   Updated: 2021/11/05 21:42:03 by Jev              ###   ########.fr       */
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
	return (words + 1);
}

static	int	move_n(char const *str, char t, size_t pos)
{
	int	after;

	after = pos;
	if (str[after] != t)
	{
		after++;
	}
	while (str[after] != '\0')
	{
		if (str[after] != t && str[after - 1] == t)
		{
			return (after - pos);
		}
		after++;
	}
	return (0);
}

static	char	*next(char const *s, char c, size_t loc)
{
	int		range;
	char	*new;
	int		j;

	j = loc;
	range = 0;
	new = NULL;
	while (s[j] != c && s[j] != '\0')
	{
		range++;
		j++;
	}
	new = ft_substr(s, loc, range);
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char		**storage;
	size_t		i;
	int			hold;
	size_t		len;

	i = 0;
	hold = 0;
	len = array_size(s, c);
	storage = (char **)malloc((len + 1) * sizeof(char *));
	if (storage == NULL)
		return (NULL);
	while (len--)
	{
		hold += move_n(s, c, hold);
		storage[i] = next(s, c, hold);
		i++;
	}
	storage[i] = NULL;
	return (storage);
}
