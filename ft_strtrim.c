/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:15:50 by Jev               #+#    #+#             */
/*   Updated: 2021/10/28 22:12:32 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*finished(const char *w, size_t range)
{
	char	*str_comp;

	if (!*w)
	{
		return (ft_strdup(""));
	}
	str_comp = (char *) malloc (range * sizeof(char) + 1);
	if (str_comp == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(str_comp, w, range + 1);
	return (str_comp);
}

static	char	*end_trim(const char *str, const char *cut)
{
	size_t	len_str;
	size_t	len_cut;

	len_str = ft_strlen(str) - 1;
	len_cut = 0;
	while (cut[len_cut] != '\0')
	{
		if (str[len_str] == cut[len_cut])
		{
			len_cut = 0;
			len_str--;
		}
		else
			len_cut++;
	}
	len_str++;
	return (finished(str, len_str));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len_s1;
	int		trim;
	int		len_set;

	len_s1 = 0;
	trim = 0;
	len_set = 0;
	while (s1[len_s1] != '\0' && set[len_set] != '\0')
	{
		if (s1[len_s1] == set[len_set])
		{
			trim++;
			len_set = 0;
			len_s1++;
		}
		else
			len_set++;
	}
	s1 += trim;
	if (!s1)
		return (ft_strdup(""));
	return (end_trim(s1, set));
}
