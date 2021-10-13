/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:12:58 by Jev               #+#    #+#             */
/*   Updated: 2021/10/13 16:21:17 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	new = malloc((len + 1) * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		new[i] = (*f)(i, *s);
		i++;
		s++;
	}
	new[i] = '\0';
	return (new);
}
