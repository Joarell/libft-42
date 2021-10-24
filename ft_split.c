/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:38:16 by Jev               #+#    #+#             */
/*   Updated: 2021/10/24 01:14:05 by Jev              ###   ########.fr       */
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

static char *next(char const *s, char c)
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
	char	**storage;
	size_t		i;

	i = 0;
	s = ft_strtrim(s, &c);
	storage = malloc (array_size(s, c) * sizeof(char *));
	if (storage == NULL)
		return (NULL);
	while (!(ft_strlen(s) == 0))
	{
		s = ft_strtrim(s, &c);
		storage[i] = next(s, c);
		if (storage[i] == NULL)
		{
			while(--i)
			{
				free(storage[i]);
			}
			return (NULL);
		}
		s += ft_strlen(storage[i]);
		i++;
	}
	storage[i] = NULL;
	return (storage);
}

#include<stdio.h>

int main (void)
{
	char	**result;
	int		i;

	result = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	i = 0;
	while (result[i] != NULL)
	{
		printf("|%s|\n", result[i]);
		i++;
	}
	free(result);
	return (0);
}
