/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:18:51 by Jev               #+#    #+#             */
/*   Updated: 2021/09/12 17:13:44 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	if (len == 0)
	{
		return (0);
	}
	else if ((*s1 == *s2) && (len >= 0))
	{
		s1++;
		s2++;
		return (ft_strncmp(s1, s2, len - 1));
	}
	return (*s1 - *s2);
}
