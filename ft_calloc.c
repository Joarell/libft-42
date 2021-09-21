/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jev <jsouza-c@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:11:31 by Jev               #+#    #+#             */
/*   Updated: 2021/09/20 22:13:20 by Jev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*meme;
	int		i;

	meme = malloc (num * size);
	if (meme == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (int) num)
	{
		*(char *)(meme + i) = 0;
		i++;
	}
	return (meme);
}
