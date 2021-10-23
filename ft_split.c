/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:38:16 by Jev               #+#    #+#             */
/*   Updated: 2021/10/23 19:45:44 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	array_size(char const *str, char c)
{
	size_t	number;
	size_t	repeat;

	repeat = 0;
	number = ft_strlen(str);
	while (*str != '\0')
	{
		if (*str == c)
		{
			repeat++;
		}
		number++;
		str++;
	}
	number -= repeat;
	return (number);
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
	char	*buffer;
	int		i;

	i = 0;
	buffer = NULL;
	storage = malloc (array_size(s, c) * sizeof(char *) + 1);
	if (storage == NULL)
	{
		return (NULL);
	}
	while (!(ft_strlen(s) == 0))
	{
		s = ft_strtrim(s, &c);
		buffer = (char *) s;
		buffer = next(buffer, c);
		storage[i] = buffer;
		s += ft_strlen(buffer);
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

	result = ft_split("  lorem  ipsum  dolor  sit  amet,  consectetur  adipiscing  elit.  Sed  non  risus.  Suspendisse  ", ' ');
	i = 0;
	while (*result[i] != '\0')
	{
		printf("|%s|\n", result[i]);

		i++;
	}
	free(result);
	return (0);
}
