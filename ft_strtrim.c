/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:15:50 by Jev               #+#    #+#             */
/*   Updated: 2021/10/21 22:20:20 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*finished(const char *w, size_t range)
{
	char	*str_comp;

	str_comp = malloc (range * sizeof(char) + 1);
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
	size_t	trim_end;
	int		len_cut;

	len_str = ft_strlen(str) - 1;
	len_cut = ft_strlen(cut) - 1;
	trim_end = 0;
	while (str[len_str] == cut[len_cut] || cut[len_cut] != '\0')
	{
		if (str[len_str] == cut[len_cut])
		{
			trim_end++;
			len_cut = ft_strlen(cut) - 1;
			len_str--;
		}
		if (str[len_str] == cut[len_cut])
		{
			trim_end++;
		}
		len_cut--;
	}
	if (trim_end == 0)
		len_str++;
	return (finished(str, len_str));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len_s1;
	int		trim;
	int		len_set;
	char	*trimed;

	len_s1 = 0;
	trim = 0;
	len_set = 0;
	while (s1[len_s1] == set[len_set] || set[len_set] != '\0')
	{
		if (s1[len_s1] == set[len_set])
		{
			trim++;
			len_set = 0;
			len_s1++;
		}
		if (s1[len_s1] == set[len_set])
		{
			trim++;
		}
		len_set++;
	}
	s1 += trim;
	trimed = end_trim(s1, set);
	return (trimed);
}
