/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:38:16 by Jev               #+#    #+#             */
/*   Updated: 2021/10/13 02:57:57 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	array_size(char const *str, char c)
{
	int		number;
	int		repeat;

	number = 0;
	repeat = 0;
	while (*str != '\0')
	{
		if (ft_isalpha(*str) == 1)
			repeat = 0;
		if ((ft_isalpha(*str) == 1) || (repeat > 0))
		{
			str++;
		}
		else if (*str == c)
		{
			number++;
			repeat++;
			str++;
		}
	}
	if (c == '\0')
		return (1);
	return (number + 1);
}

static char	*buffer_make(char const *str, char c, char const *b)
{
	int			size;
	char const	*aux;

	size = 0;
	aux = str;
	while (*str != c && *str != '\0')
	{
		size++;
		str++;
	}
	b = malloc (size * sizeof(char));
	if (b == NULL)
	{
		return (NULL);
	}
	ft_memcpy((void *) b, aux, size);
	return ((char *) b);
}

char	**ft_split(char const *s, char c)
{
	char	**storage;
	char	*buffer;
	int		len;
	int		i;

	i = 0;
	buffer = NULL;
	storage = malloc (array_size(s, c) * sizeof(char *) + 1);
	len = ft_strlen(s);
	if (storage == NULL)
	{
		return (NULL);
	}
	while (len >= 0)
	{
		s = ft_strtrim(s, &c);
		buffer = (char *) buffer_make(s, c, buffer);
		storage[i] = buffer;
		s += ft_strlen(buffer);
		len = ft_strlen(s) - ft_strlen(buffer);
		i++;
	}
	storage[i] = NULL;
	return (storage);
}
