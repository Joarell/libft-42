/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:15:50 by Jev               #+#    #+#             */
/*   Updated: 2021/09/25 16:56:27 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*cut;
	int			len1;
	int			len2;
	char const	*set2;

	set2 = set;
	len2 = ft_strlen(set);
	while (*s1 == *set)
	{
		s1++;
		set++;
	}
	len1 = ft_strlen(s1);
	while (s1[len1] == set2[len2])
	{
		if (len2 == 0)
			break ;
		len1--;
		len2--;
	}
	cut = malloc (len1 * sizeof(char));
	if (cut == NULL)
		return (NULL);
	ft_memcpy(cut, s1, len1 * sizeof(char));
	return (cut);
}
