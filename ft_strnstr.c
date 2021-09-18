/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:12:54 by Jev               #+#    #+#             */
/*   Updated: 2021/09/18 19:03:37 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*aux;

	if (*(char *) little == '\0')
		return ((char *) big);
	while (*big != *little)
	{
		if (len == 0)
			break ;
		big++;
		len--;
	}
	aux = big;
	while (*little != '\0')
	{
		if ((len == 0) || (*big != *little))
			break ;
		len--;
		big++;
		little++;
	}
	if ((*little != '\0') || (ft_isalpha(*big) == 1))
		return (NULL);
	return ((char *) aux);
}
