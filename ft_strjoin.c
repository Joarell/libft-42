/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 01:09:31 by Jev               #+#    #+#             */
/*   Updated: 2021/10/02 21:54:54 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		len;
	int		extent1;

	extent1 = ft_strlen(s1);
	len = extent1 + ft_strlen(s2);
	new = malloc (sizeof(len));
	if (new == NULL)
	{
		return (NULL);
	}
	ft_memmove(new, s1, len * sizeof(char));
	ft_memmove(new + extent1, s2, len * sizeof(char));
	return (new);
}
