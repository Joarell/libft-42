/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:12:58 by Jev               #+#    #+#             */
/*   Updated: 2021/10/12 21:18:42 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		len;
	int		i;

	len = ft_strlen(s);
	new = malloc(len * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= len)
	{
		new[i] = (*f)(i, *s);
		i++;
		s++;
	}
	return (new);
}
