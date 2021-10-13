/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:11:31 by Jev               #+#    #+#             */
/*   Updated: 2021/10/13 16:13:16 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*loc;

	loc = (void *) malloc (num * size);
	if (loc == NULL)
	{
		return (NULL);
	}
	ft_memset(loc, 0, size * num);
	return (loc);
}
